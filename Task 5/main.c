#include<stdint.h>
#include "Atmega32RegMap.h"
#include "bitMath.h"
#include "segment.h"
#include<util/delay.h>


void main()
{
DDRA_Reg=0xFF;
clearBit(DDRC_Reg,0);//switch  1
clearBit(DDRD_Reg,5);//switch 2
uint8_t number[10]=
{
segment_Zero ,
segment_One  ,
segment_Two  ,
segment_Three,
segment_Four ,
segment_Five ,
segment_Six  ,
segment_Seven,
segment_Eight,
segment_Nine
};
uint8_t count=0;
PORTA_Reg=number[count];

uint8_t state1=0;
uint8_t state2=0;
uint8_t prevState1 = 0;
uint8_t prevState2 = 0;

while(1)
{
state1=ReadBit(PINC_Reg,0);
state2=ReadBit(PIND_Reg,5);


if(state1==1&&prevState1 == 0)
{
if(count<9)
{count++;
PORTA_Reg = number[count];
}
_delay_ms(250);
}

if(state2==1&&prevState2 == 0)
{
if(count>0)
{count--;
PORTA_Reg = number[count];
}
_delay_ms(250);
}
prevState1 = state1;
prevState2 = state2;

}
}