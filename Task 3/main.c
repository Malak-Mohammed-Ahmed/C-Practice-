#include <stdint.h>
#include "Atmega32RegMap.h"
#include "bitMath.h"



void main()
{
clearBit(DDRA_Reg,3);
setBit(DDRC_Reg,2);
uint8_t state=0;

while(1)
{
state =ReadBit(PINA_Reg,3);
if(state==1)
{
setBit(PORTC_Reg,2);

}
else 
{
clearBit(PORTC_Reg,2);  
}


}

}