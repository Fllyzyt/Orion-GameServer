#pragma once
#include "../SDK.hpp"

namespace InventoryService {
	static inline void (*SetupInventoryServiceComponentOG)(__int64 Service);
	static void SetupInventoryServiceComponent(__int64 Service) {
		printf("UFortControllerComponent_InventoryService::SetupInventoryServiceComponent was called!\n");
		// UFortControllerComponent_InventoryService* InventoryServicE = (UFortControllerComponent_InventoryService*)Service;
		printf("shouldnt be null: %p\n", Service + 176);
		// printf("Got Inventory Service Manger: %p\n", !(unsigned __int8)sub_7FF6BA021260(a1 + 176, v11, v12));
		
		return SetupInventoryServiceComponentOG(Service);
	}
}