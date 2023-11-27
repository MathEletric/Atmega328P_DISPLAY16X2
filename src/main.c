#include "lcd_16X2_ATMEGA328.h"
#include<avr/io.h>
#include<util/delay.h>

#define RS 1
#define E  0

int main(){
    DDRD = DDRD | ((1<<4)+(1<<5)+(1<<6)+(1<<7)); //DATA LCD
    DDRB = DDRB | ((1<<RS)+(1<<E));
    Lcd_init();
    Lcd_out(1,2, "SE PREPARA PRA FINAL");
    Lcd_out(2,2, "FINAL");
    while(1){
    
    
    
    }



}