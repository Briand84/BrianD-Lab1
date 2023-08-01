/*Error Message: Mutex: 0x200015FC, Not allowed in ISR context (Something happening in the SRAM location that the 
microcontroller is not happy about)Green LED on mbed LED1 flashing SOS sequence*/

//reset button is printing "button pressed" instead of the blue user button which is (PC_13)

/*used a switch function for the rise and fall of the user button (PC_13) on the mbed, now printing correctly, 
added a sleep_for  statement between presses of 5 seconds*/




#include "mbed.h"

// main() runs in its own thread in the OS
InterruptIn bttn(PC_13);
char flag0 = 0;

void fall_int(){
     flag0 = 1;
}

void rise_int(){
     flag0 = 0; 

}

int main(){
    printf("Lab assignment 1\r\n");

   
     bttn.fall(&fall_int);
     bttn.rise(&rise_int);
     while(1){
         switch (flag0){
                 case 1 :
                 printf("Button Pressed\r\n");
                 break;
                 case 2:
                 break;
         }
         ThisThread::sleep_for(500);
          }
         
     }
       

    







