#ifndef __CANBUS_PACKET_DRIVER_H__
#define __CANBUS_PACKET_DRIVER_H__

#include <CanPacket.h>

namespace wlp {
    namespace packet {
        uint8_t send(MCP2515 &bus, Packet &p);
        void read(MCP2515 &bus, Packet &p);
    }
}

#endif
