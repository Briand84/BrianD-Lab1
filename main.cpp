/*Error Message: Mutex: 0x200015FC, Not allowed in ISR context (Something happening in the SRAM location that the 
microcontroller is not happy about)Green LED on mbed LED1 flashing SOS sequence*/

//reset button is printing "button pressed" instead of the blue user button which is (PC_13)




#include "mbed.h"

// main() runs in its own thread in the OS
InterruptIn bttn(PC_13);
char flag0 = 1;

void fall_int(){
     flag0 = 0;
}

int main()

   {
     bttn.fall(&fall_int);
     while(1){
           printf("Button Pressed\r\n");
           flag0 = 1;
    break;
         }
     }
       

    







