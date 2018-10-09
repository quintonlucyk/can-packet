#include "canbus-packet.h"

#include "Cosa/Trace.hh"
#include "Cosa/UART.hh"

using namespace wlp;

float data = 12.512;
uint32_t data_type = 4; 
canbusPacket packet(data, data_type);

void setup() {
	uart.begin(115200);
	trace.begin(&uart);
	trace << "canbus" << endl;

}

void loop() {
	trace << "Serial" << endl;

	delay(500);
}

