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




