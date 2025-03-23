// Copyright (c) 2024 Project Nova LLC

#include "Sinum.h"
#include <string>
#include "Core/Constants.h"
#include "Utilities/memcury.h"

bool Sinum::ProcessRequestHook(FCurlHttpRequest* Request)
{
    std::wstring URL(Request->GetURL().c_str());
    size_t PathIndex = URL.find(L"ol.epicgames.com");

    if (PathIndex != std::wstring::npos)
    {
        auto Path = URL.substr(PathIndex + 16);
        auto NewURL = Constants::API_URL + Path;
        printf("%ls\n", NewURL.c_str());
        Request->SetURL(NewURL.c_str());
    }

    return _ProcessRequest(Request);
}

void Sinum::SetHeaderHook(FCurlHttpRequest* Request, FString_Sinum HeaderName, FString_Sinum HeaderValue) {
    FString_Sinum BasicAuthorization = FString_Sinum(L"basic NTI1YWExNTcyZjhmNDMxMDg4NjMyMmIxYTBiOTA0MDI6ZjE0MjRmNzEyMDBlNDM3MzliMWI5MWE5Y2YyYjA3ZjI=");

    if (wcscmp(HeaderName.c_str(), L"Authorization") == 0) {
        if (wcsncmp(HeaderValue.c_str(), L"basic", 5) == 0) {
            return _SetHeader(Request, HeaderName, BasicAuthorization);
        }
    }

    return _SetHeader(Request, HeaderName, HeaderValue);
}

void Sinum::Init()
{
    auto SetHeaderStringRef = Memcury::Scanner::FindStringRef(Constants::SetHeader);
    if (SetHeaderStringRef.IsValid()) {
        _SetHeader = SetHeaderStringRef
            .ScanFor({ 0x48, 0x83, 0xEC, 0x38 }, false)
            .GetAs<decltype(_SetHeader)>();

        printf("_SetHeader: %p\n", _SetHeader);
        auto PointerRef = Memcury::Scanner::FindPointerRef(_SetHeader);
        printf("PointerRef: %p\n", PointerRef);
        if (PointerRef.IsValid()) {
            *PointerRef.GetAs<void**>() = SetHeaderHook;
        }
    }

    auto StringRef = Memcury::Scanner::FindStringRef(Constants::ProcessRequest_C2);
    if (StringRef.IsValid()) {
        _ProcessRequest = StringRef
            .ScanFor({ 0x4C, 0x8B, 0xDC }, false)
            .GetAs<decltype(_ProcessRequest)>();

        auto PointerRef = Memcury::Scanner::FindPointerRef(_ProcessRequest);
        if (PointerRef.IsValid()) {
            *PointerRef.GetAs<void**>() = ProcessRequestHook;
            // *((void**)(PointerRef.Get() + 8 * 17)) = SetHeaderHook;
            return;
        }
    }

    StringRef = Memcury::Scanner::FindStringRef(Constants::ProcessRequest);
    if (StringRef.IsValid()) {
        _ProcessRequest = StringRef
            .ScanFor({ 0x48, 0x81, 0xEC }, false)
            .ScanFor({ 0x40 }, false)
            .GetAs<decltype(_ProcessRequest)>();

        auto PointerRef = Memcury::Scanner::FindPointerRef(_ProcessRequest);
        if (PointerRef.IsValid()) {
            *PointerRef.GetAs<void**>() = ProcessRequestHook;
            *((void**)(PointerRef.Get() + 8 * 17)) = SetHeaderHook;
            return;
        }
    }
}