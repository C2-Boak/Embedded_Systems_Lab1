
#include "mbed.h"

// Blinking rate in milliseconds
#define BLINKING_RATE     300ms

int main()
{
    DigitalOut led1(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);

    while (true) {

        led1 = 1;
        led2 = 1;
        led3 = 1;
        ThisThread::sleep_for(BLINKING_RATE);
        led1 = 0;
        led2 = 0;
        led3 = 0;
        ThisThread::sleep_for(BLINKING_RATE);
        ;
    }
}