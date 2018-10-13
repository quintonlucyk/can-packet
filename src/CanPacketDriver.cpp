#include <MCP2515.h>
#include <CanPacketDriver.h>

using namespace wlp;

uint8_t packet::send(MCP2515 &bus, Packet &p) {
    uint8_t *pBuf = reinterpret_cast<uint8_t *>(&p.packet());
    return bus.send_buffer(p.id(), sizeof(uint64_t), pBuf);
}

void packet::read(MCP2515 &bus, Packet &p) {
    uint8_t *pBuf = reinterpret_cast<uint8_t *>(&p.packet());
    bus.read_buffer(sizeof(uint64_t), pBuf);
}
