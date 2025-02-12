#include "mbed.h"


#define BLINK_RATE    200ms
#define BLINK_COUNT   5

int main()
{
    DigitalOut led1(LED1);
    DigitalOut led2(LED2);
    DigitalOut led3(LED3);


    auto blink_leds = [&]() {
        for (int i = 0; i < BLINK_COUNT; i++) {
            led1 = 1;
            led2 = 1;
            led3 = 1;
            ThisThread::sleep_for(BLINK_RATE);

            led1 = 0;
            led2 = 0;
            led3 = 0;
            ThisThread::sleep_for(BLINK_RATE);
        }
    };


    blink_leds();


    led1 = 1;
    led2 = 0;
    led3 = 0;


}