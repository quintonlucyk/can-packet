#include <CanPacket.h>
#include <stdio.h>

using namespace wlp;

int main(void) {
    puts("64-bit CAN Packet test");
    Packet p1(65.34, 1);
    printf("DataType: %u\nData: %f\n", p1.data_type(), p1.dataf());
    p1.dataf() = 55.5;
    p1.data_type() = 5;
    printf("DataType: %u\nData: %f\n", p1.data_type(), p1.dataf());
    p1.data() = 115;
    p1.data_type() = 10;
    printf("DataType: %u\nData: %u\n", p1.data_type(), p1.data());
}
