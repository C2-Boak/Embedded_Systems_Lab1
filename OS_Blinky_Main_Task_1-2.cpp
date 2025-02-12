
#include "mbed.h"


#define BLINKING_RATE     500ms

int main()
{
    DigitalOut led1(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);

    while (true) {

        led1 = 1;
        ThisThread::sleep_for(BLINKING_RATE);
        led1 = 0;
        ThisThread::sleep_for(BLINKING_RATE);


        led2 = 1;
        ThisThread::sleep_for(BLINKING_RATE);
        led2 = 0;
        ThisThread::sleep_for(BLINKING_RATE);

        led3 = 1;
        ThisThread::sleep_for(BLINKING_RATE);
        led3 = 0;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}