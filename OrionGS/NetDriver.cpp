#include "NetDriver.h"
#include "Utils.h"

void NetDriver::TickFlush(UNetDriver* NetDriver)
{
	if (NetDriver && NetDriver->ClientConnections.Num() > 0 && NetDriver->ReplicationDriver)
		ServerReplicateActors(NetDriver->ReplicationDriver);

	

	return TickFlushOriginal(NetDriver);
}