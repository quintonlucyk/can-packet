#ifndef __CANBUS_PACKET_H__
#define __CANBUS_PACKET_H__

#include <stdint.h>

namespace wlp {

    class Packet {
    public:
        Packet(uint32_t id, uint8_t * data, uint8_t len);

        uint32_t id();
        uint8_t * data();
        uint8_t len();

    private:
        uint32_t m_id;
        uint8_t m_data[8];
        uint8_t m_len;
    };

}

#endif //__CANBUS_PACKET_H__
