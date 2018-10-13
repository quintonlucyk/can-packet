#include <CanPacket.h>

static_assert(sizeof(float) == sizeof(uint32_t),
        "Expected float to be 32 bits");

using namespace wlp;

Packet::Packet(uint32_t id, uint64_t packet) :
    m_id(id),
    m_packet(packet) {}

Packet::Packet(uint32_t id, uint32_t data, uint32_t type) :
    m_id(id),
    m_data(data),
    m_type(type) {}

Packet::Packet(uint32_t id, float data, uint32_t type) :
    m_id(id),
    m_float(data),
    m_type(type) {}

uint32_t &Packet::id() {
    return m_id;
}

const uint32_t &Packet::id() const {
    return m_id;
}

uint32_t &Packet::data() {
    return m_data;
}

const uint32_t &Packet::data() const {
    return m_data;
}

uint32_t &Packet::type() {
    return m_type;
}

const uint32_t &Packet::type() const {
    return m_type;
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
