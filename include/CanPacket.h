#ifndef GOOSE_CANBUS_PACKET_H
#define GOOSE_CANBUS_PACKET_H

#include <stdint.h>

namespace wlp {

    class Packet {
    public:
        explicit Packet(float data, uint32_t data_type);
        explicit Packet(uint64_t packet);


        uint32_t &data();
        uint32_t &data_type();
        uint64_t &packet();
        float &dataf();

        const uint32_t &data() const;
        const uint32_t &data_type() const;
        const uint64_t &packet() const;
        const float &dataf() const;

    private:
        union {
            struct {
                union {
                    uint32_t m_data;
                    float m_float;
                };
                uint32_t m_data_type;
            };
            uint64_t m_packet;
        };
    };

}

#endif //GOOSE_CANBUS_PACKET_H
