#ifndef _BITMATH_H
#define _BITMATH_H

#define setBit(Reg, BitNo) (Reg|=(1<<BitNo))

#define clearBit(Reg, BitNo) (Reg&=~(1<<BitNo))

#define ReadBit(Reg, BitNo) ((Reg>>BitNo)&1)

#define ToggleBit(Reg,BitNo)   (Reg^=(1<<BitNo))

#endif

