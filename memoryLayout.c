/*
The memory layout of a variable to know it is a big endian or little endian.
*/

#include<stdio.h>
union memoryLayout
{
   int var1;
   short var2;
   char ch;
};
int main()
{
  union memoryLayout mem;
  mem.var1=0x12345678;
  if(mem.ch==0x78)
  {
     printf("Little endian\n");
  }
  else
  {
     printf("Big endian\n");
  }
  return 0;
}

#if 0
//output
Little endian
#endif
