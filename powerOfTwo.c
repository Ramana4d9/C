/*
Write a program to find the given number is 2 power or not.
*/

#include<stdio.h>
#define POWERTWO(n)  ((n) & ((n)-1))

int main()
{
  int num,k;
  printf("Enter number to find power of two\n");
  scanf("%d",&num);
  printf("Number :%d\n",num);
 
  k=POWERTWO(num);
  if(k!=0)
  {
    printf(" %d  is not a power of 2 \n",num);
  }
  else
  {
    printf(" %d  is a power of 2 \n",num);
  }
  return 0;
 }

#if 0

//output
Enter number to find power of two
10
Number :10
10  is not a power of 2 

//output
Enter number to find power of two
246
Number :246
246  is not a power of 2 

//output
Enter number to find power of two
2048
Number :2048
2048  is a power of 2 

//output
Enter number to find power of two
2
Number :2
2  is a power of 2 

//output
Enter number to find power of two
256
Number :256
256  is a power of 2 

#endif
