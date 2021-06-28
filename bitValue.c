/*
 Write a program as a Macro will take two arguments. It should return the position 1 or 0
 */

#include <stdio.h>
#define BITVALUE(n,p) ((n)>>(p))&1

int main()
{
  int num,pos;
  printf("Enter number and bit position\n");
  scanf("%d%d",&num,&pos);
  printf("Number :%d ,Position:%d\n",num,pos);

  printf("Bit value at %d position is %d\n",pos,BITVALUE(num,pos));
  return 0;
}

#if 0
//output-1
Enter number and bit position
10 0
Number :10 ,Position:0
Bit value at 0 position is 0

//output-2
Enter number and bit position
10 1
Number :10 ,Position:1
Bit value at 1 position is 1

//output-3
Enter number and bit position
10 2
Number :10 ,Position:2
Bit value at 2 position is 0

//output-4
Enter number and bit position
10 3
Number :10 ,Position:3
Bit value at 3 position is 1

#endif
