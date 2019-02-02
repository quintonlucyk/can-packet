#include <CanPacket.h>
#include <stdio.h>
#include <iostream>

using namespace wlp;

// static void ppacket(const Packet &p) {
//     printf("Id: %u\nType: %u\nData: %u\n", p.id(), p.type(), p.data());
// }
//
// static void ppacketf(const Packet &p) {
//     printf("Id: %u\nType: %u\nData: %f\n", p.id(), p.type(), p.dataf());
// }

int main(void) {
    uint8_t data[8] = {0, 1, 2, 3, 4, 5, 31, 32};
    uint32_t id = 32;
    uint8_t len = 8;
    Packet p = Packet(id, data, len);
    std::cout << "id: " << p.id() << std::endl;
    std::cout << "len: " << (int)p.len() << std::endl;
    for (int i = 0; i < 8; ++i){
        std::cout << "data: " << (int)*(p.data()+i) << std::endl;
    }


    // puts("64-bit CAN Packet test");
    // Packet p(10, 65.5f, 20);
    // ppacketf(p);
    // p.dataf() = 12.3f;
    // ppacketf(p);
    // p.type() = 10;
    // p.data() = 155;
    // ppacket(p);
    // p.id() = 12;
    // ppacket(p);
}
