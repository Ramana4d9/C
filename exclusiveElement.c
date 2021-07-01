/*
Do exclusive OR for
20,20,40,40,13,13,11,88,88,98,99,11,11
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n,i,j;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  p=(int *)malloc(sizeof(int) * n);
  printf("Enter elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&p[i]);
  }

  printf("Elements: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",p[i]);
  }
  printf("\n");

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    { 
       if(p[i]==p[j])
       {
         p[i]=0;
         p[j]=0;
         break;
       }
     }
  }

  for(i=0;i<n;i++)
  {
     if(p[i]!=0)
     {
     	printf("The element which doesn't exist in pair:%d\n",p[i]);
	break;
     }
  }

  return 0;
}

#if 0

//output
Enter number of elements
5
Enter elements
1 2 1 3 2
Elements: 1 2 1 3 2 The element which doesn't exist in pair:3

//output
Enter number of elements
3
Enter elements
1 1 3
Elements: 1 1 3
The element which doesn't exist in pair:3

//output
Enter number of elements
7
Enter elements
9 1 2 1 2 2 2
Elements: 9 1 2 1 2 2 2
The element which doesn't exist in pair:9

#endif
