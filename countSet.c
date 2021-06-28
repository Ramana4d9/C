/*
Write a program to count set bits.
*/


#include<stdio.h>

int count1(int num);
int count2(int num);

int main()
{
  int num;
  printf("enter number\n");
  scanf("%d",&num);

  printf("By method1-count of set bits:%d\n",count1(num));
  printf("By method2-count of set bits:%d\n",count2(num));
  return 0;
}

int count1(int num)
{
  int count=0,i;
  for(i=0;i<32;i++)
  {
     if((num>>i & 1)==1)
     {
        count++;
     }
  }
  return count;
}

//Reducing the time complexity
int count2(int num)
{
  int count=0;
  while(num!=0)
  {
     num=num & num-1;
     count++;
  }
  return count;
}
#if 0

//output-1
enter number
10 
By method1-count of set bits:2
By method2-count of set bits:2

//output
enter number
30
By method1-count of set bits:4
By method2-count of set bits:4

//output
enter number
15
By method1-count of set bits:4
By method2-count of set bits:4

//output
enter number
1
By method1-count of set bits:1
By method2-count of set bits:1

//output
enter number
128
By method1-count of set bits:1
By method2-count of set bits:1

#endif 
