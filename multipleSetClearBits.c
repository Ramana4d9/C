/*
Write macros to setbits and clear bits
*/

#include<stdio.h>

int mask;
#define MASK(nbits)  (1<<(nbits))-1
#define CLEAR(num,pos) ((num) & ~(mask<<(pos)))
#define SET(num,pos) ((num)|(mask<<(pos)))
#define TOGGLE(num,pos) ((num)^(mask<<(pos)))
 
int main()
{
  int num,pos,nbits;
  printf("Enter number,No. of bits and bit position\n");
  scanf("%i%d%d",&num,&nbits,&pos);
  printf("Number :%0xX ,No.of bits:%d Position:%d\n",num,nbits,pos);
   
  mask=MASK(nbits);
  num=SET(num,pos);
  printf("Resultant Bit value after setting %d position is %0xX\n",pos,num);
   
  num=CLEAR(num,pos);
  printf("Resultant Bit value after clearinging %d position is %0xX\n",pos,num);
  
  num=TOGGLE(num,pos);
  printf("Resultant Bit value after toggling %d position is %0xX\n",pos,num);
  return 0;
}


#if 0

//output
Enter number,No. of bits and bit position
0x12345678 4 8
Number :12345678X ,No.of bits:4 Position:8
Resultant Bit value after setting 8 position is 12345f78X
Resultant Bit value after clearinging 8 position is 12345078X
Resultant Bit value after toggling 8 position is 12345f78X

//output
Enter number,No. of bits and bit position
0x12 2 0
Number :12X ,No.of bits:2 Position:0
Resultant Bit value after setting 0 position is 13X
Resultant Bit value after clearinging 0 position is 10X
Resultant Bit value after toggling 0 position is 13X

//output
Enter number,No. of bits and bit position
0x34 2 4
Number :34X ,No.of bits:2 Position:4
Resultant Bit value after setting 4 position is 34X
Resultant Bit value after clearinging 4 position is 4X
Resultant Bit value after toggling 4 position is 34X

#endif 
