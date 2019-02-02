#include <CanPacket.h>
#include <iostream>
#include <assert.h>

using namespace wlp;

Packet::Packet(uint32_t id, uint8_t * data, uint8_t len) :
    m_id(id),
    m_len(len) {
      assert(len <= 8);
      for (uint8_t i = 0; i < len; ++i) {
        m_data[i] = data[i];
      }
    }

uint32_t Packet::id() {
    return m_id;
}

uint8_t * Packet::data() {
    return m_data;
}

uint8_t Packet::len() {
    return m_len;
}
