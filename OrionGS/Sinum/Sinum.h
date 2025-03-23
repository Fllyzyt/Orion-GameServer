// Copyright (c) 2024 Project Nova LLC

#pragma once
#include "Core/Unreal/String.h"

class FCurlHttpRequest
{
	private:
		void** VTable;

	public:

		FString_Sinum GetURL()
		{
			FString_Sinum Result;
			return ((FString_Sinum & (*)(FCurlHttpRequest*, FString_Sinum&))(*VTable))(this, Result);
		}

		FString_Sinum GetHeader(const FString_Sinum& HeaderName)
		{
			FString_Sinum Result;
			return ((FString_Sinum & (*)(FCurlHttpRequest*, FString_Sinum&))(VTable[3]))(this, Result);
		}

		void SetURL(FString_Sinum URL)
		{
			((void (*)(FCurlHttpRequest*, FString_Sinum&))(VTable[10]))(this, URL);
		}

		void SetHeader(FString_Sinum HeaderName, FString_Sinum HeaderValue)
		{
			((void (*)(FCurlHttpRequest*, FString_Sinum&, FString_Sinum&))(VTable[17]))(this, HeaderName, HeaderValue);
		}
};

namespace Sinum
{
	static bool (*_ProcessRequest)(FCurlHttpRequest*);
	static bool ProcessRequestHook(FCurlHttpRequest* Request);

	static void (*_SetHeader)(FCurlHttpRequest* Request, FString_Sinum HeaderName, FString_Sinum HeaderValue);
	static void SetHeaderHook(FCurlHttpRequest* Request, FString_Sinum HeaderName, FString_Sinum HeaderValue);

	void Init();
}