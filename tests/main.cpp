#include <CanPacket.h>
#include <stdio.h>

using namespace wlp;

static void ppacket(const Packet &p) {
    printf("Id: %u\nType: %u\nData: %u\n", p.id(), p.type(), p.data());
}

static void ppacketf(const Packet &p) {
    printf("Id: %u\nType: %u\nData: %f\n", p.id(), p.type(), p.dataf());
}

int main(void) {
    puts("64-bit CAN Packet test");
    Packet p(10, 65.5f, 20);
    ppacketf(p);
    p.dataf() = 12.3f;
    ppacketf(p);
    p.type() = 10;
    p.data() = 155;
    ppacket(p);
    p.id() = 12;
    ppacket(p);
}
