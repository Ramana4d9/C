/*
Write a program to CLEAR, SET, TOGGLE with bitwise operator using Macro
*/

#include<stdio.h>

#define CLEAR(num,pos) ((num) & ~(1<<(pos)))
#define SET(num,pos) ((num)|(1<<(pos)))
#define TOGGLE(num,pos) ((num)^(1<<(pos)))

int main()
{
   int num,pos;
   printf("Enter number and bit position\n");
   scanf("%d%d",&num,&pos);
   printf("Number :%d ,Position:%d\n",num,pos);

  num=SET(num,pos);
  printf("Resultant Bit value after setting %d position is %d\n",pos,num);
  
  num=CLEAR(num,pos);
  printf("Resultant Bit value after clearinging %d position is %d\n",pos,num);
  
  num=TOGGLE(num,pos);
  printf("Resultant Bit value after toggling %d position is %d\n",pos,num);
  return 0;
 }

#if 0
//output-1
Enter number and bit position
10 2
Number :10 ,Position:2
Resultant Bit value after setting 2 position is 14
Resultant Bit value after clearinging 2 position is 10
Resultant Bit value after toggling 2 position is 14

//output-2
Enter number and bit position
2 0
Number :2 ,Position:0
Resultant Bit value after setting 0 position is 3
Resultant Bit value after clearinging 0 position is 2
Resultant Bit value after toggling 0 position is 3

//output-3
Enter number and bit position
15 3
Number :15 ,Position:3
Resultant Bit value after setting 3 position is 15
Resultant Bit value after clearinging 3 position is 7
Resultant Bit value after toggling 3 position is 15

#endif 
