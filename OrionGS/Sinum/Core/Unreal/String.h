// Copyright (c) 2024 Project Nova LLC

#pragma once
#include "Array.h"
#include "Memory.h"

class FString_Sinum : private TArray_Sinum<wchar_t>
{
public:

	inline FString_Sinum()
	{
		Data = nullptr;
		NumElements = 0;
		MaxElements = 0;
	}

	inline FString_Sinum(const char* Other)
	{
		if (Other)
		{
			auto NumCharacters = (int)std::strlen(Other);
			MaxElements = NumElements = NumCharacters + 1;

			Data = static_cast<wchar_t*>(FMemory_Sinum::Malloc(NumElements * sizeof(wchar_t)));

			size_t ConvertedChars = 0;
			mbstowcs_s(&ConvertedChars, Data, NumElements, Other, _TRUNCATE);
		}
		else
		{
			MaxElements = NumElements = 0;
			Data = nullptr;
		}
	};

	inline FString_Sinum(const wchar_t* Other)
	{
		MaxElements = NumElements = *Other ? (int)std::wcslen(Other) + 1 : 0;

		if (NumElements && Other)
		{
			Data = static_cast<wchar_t*>(FMemory_Sinum::Malloc(NumElements * 2));

			memcpy_s(Data, NumElements * 2, Other, NumElements * 2);
		}
	};


	inline auto c_str()
	{
		return Data;
	}
};