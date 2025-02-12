#include "mbed.h"

#define BLINKING_RATE1   200ms
#define BLINKING_RATE2   400ms
#define BLINKING_RATE3   600ms

int main()
{
    DigitalOut led1(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);

    while (true) {

        led1 = 1;
        ThisThread::sleep_for(BLINKING_RATE1);
        led1 = 0;


        led2 = 1;
        ThisThread::sleep_for(BLINKING_RATE2);
        led2 = 0;


        led3 = 1;
        ThisThread::sleep_for(BLINKING_RATE3);
        led3 = 0;
    }
}