#ifndef __CANBUS_PACKET_H__
#define __CANBUS_PACKET_H__

#include <stdint.h>

namespace wlp {

    class Packet {
    public:
        Packet(uint32_t id, uint64_t packet);
        Packet(uint32_t id, uint32_t data, uint32_t type);
        Packet(uint32_t id, float data, uint32_t type);

        uint32_t &id();
        uint32_t &data();
        uint32_t &type();
        uint64_t &packet();
        float &dataf();

        const uint32_t &id() const;
        const uint32_t &data() const;
        const uint32_t &type() const;
        const uint64_t &packet() const;
        const float &dataf() const;

    private:
        uint32_t m_id;
        union {
            struct {
                union {
                    uint32_t m_data;
                    float m_float;
                };
                uint32_t m_type;
            };
            uint64_t m_packet;
        };
    };

}

#endif //__CANBUS_PACKET_H__
