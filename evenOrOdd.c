/*
Write a program with Macro to find even or odd using bitwise operator
*/

#include<stdio.h>
#define EVENODD(n)  (n)&1

int main()
{
  int num,k;
  printf("Enter number to find even or odd\n");
  scanf("%d",&num);
  printf("Number :%d\n",num);
 
  k=EVENODD(num);
  if(k==1)
  {
    printf(" %d  is odd\n",num);
  }
  else
  {
    printf(" %d  is even\n",num);
  }
  return 0;
 }

#if 0

//output
Enter number to find even or odd
23
Number :23
23  is odd

//output
Enter number to find even or odd
4556
Number :4556
4556  is even

//output
Enter number to find even or odd
332
Number :332
332  is even

//output
Enter number to find even or odd
0
Number :0
0  is even

#endif
