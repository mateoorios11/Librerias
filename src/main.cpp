#include <Arduino.h>
#include "bcd_7seg.h"
void setup(){
    void bcd_7seg_init();
}
void loop(){
    bcd_7seg(0);
    delay(2500);

    bcd_7seg(1);
    delay (2500);

    bcd_7seg(2);
    delay (2500);

    bcd_7seg(3);
    delay (2500);

    bcd_7seg(4);
    delay (2500);

    bcd_7seg(5);
    delay (2500);

    bcd_7seg(6);
    delay (2500);

    bcd_7seg(7);
    delay (2500);

    bcd_7seg(8);
    delay (2500);
    
    bcd_7seg(9);
    delay (2500);   
}