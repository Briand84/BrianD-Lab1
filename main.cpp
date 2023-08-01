/*Error Message: Mutex: 0x200015FC, Not allowed in ISR context (Something happening in the SRAM location that the 
microcontroller is not happy about)Green LED on mbed LED1 flashing SOS sequence*/




#include "mbed.h"

// main() runs in its own thread in the OS
InterruptIn bttn(PC_13);

void bttn_InterruptIn(){
     printf("Button Pressed\r\n");
}
int main()
{
    bttn.fall(bttn_InterruptIn);
    while(true){

    }


}




