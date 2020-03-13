#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int main()
{
    int i, j;

    redLED = 1;
    greenLED = 1;
    while(true){
        for(i = 1; i <= 6; i++){
            redLED = !redLED;
            wait(0.5f);
        }
        for(j = 1; j <= 4; j++){
            greenLED = !greenLED;
            wait(0.5f);
        }
        
    }
}