// Copyright (c) 2024 Project Nova LLC

#pragma once

namespace Constants
{
	#ifdef USE_BACKEND_DEV
		constexpr auto API_URL = L"https://fortnite-master-server-dev.ezfn.dev";
	#else
		constexpr auto API_URL = L"https://fortnite-master-server.ezfn.dev";
	#endif

	constexpr auto ProcessRequest = L"Could not set libcurl options for easy handle, processing HTTP request failed. Increase verbosity for additional information.";
	constexpr auto ProcessRequest_C2 = L"STAT_FCurlHttpRequest_ProcessRequest";

	constexpr auto SetHeader = L"FCurlHttpRequest::SetHeader() - attempted to set header on a request that is inflight";

	constexpr auto URLOffset = L"ProcessRequest failed. URL '%s' is not a valid HTTP request. %p";
	constexpr auto Realloc = L"AbilitySystem.Debug.NextTarget";
}