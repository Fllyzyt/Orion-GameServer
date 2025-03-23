#pragma once
#include "SDK.hpp"

using namespace SDK;
using namespace std;

namespace NetDriver
{
	inline void (*TickFlushOriginal)(UNetDriver*);
	void TickFlush(UNetDriver* NetDriver);
}