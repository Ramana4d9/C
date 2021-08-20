/*
creating the static libraries.
*/
#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter a,b values\n");
  scanf("%d%d",&a,&b);
  printf("Sum of %d and %d is %d\n",a,b,sum(a,b));
  printf("Sub of %d and %d is %d\n",a,b,sub(a,b));
  printf("Mul of %d and %d is %d\n",a,b,mul(a,b));
  printf("Div of %d and %d is %d\n",a,b,div(a,b));
  return 0;
}
