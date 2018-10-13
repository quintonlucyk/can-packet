#include <CanPacket.h>

static_assert(sizeof(float) == sizeof(uint32_t),
        "Expected float to be 32 bits");

using namespace wlp;

Packet::Packet(float data, uint32_t data_type) :
    m_float(data),
    m_data_type(data_type) {}

Packet::Packet(uint64_t packet) :
    m_packet(packet) {}

uint32_t &Packet::data() {
    return m_data;
}

const uint32_t &Packet::data() const {
    return m_data;
}

uint32_t &Packet::data_type() {
    return m_data_type;
}

const uint32_t &Packet::data_type() const {
    return m_data_type;
}

uint64_t &Packet::packet() {
    return m_packet;
}

const uint64_t &Packet::packet() const {
    return m_packet;
}

float &Packet::dataf() {
    return m_float;
}

const float &Packet::dataf() const {
    return m_float;
}
