/*
 * A sample program to know a copy of structure is shallow copy or deep copy.
 * shallow copy means if one structure changes then it will not effect other structure.
 * Deep copy means if one structure changes then changes refelect in other structure.
 * */

#include<stdio.h>
struct student
{
    int rollNo;
    char name[20];
    float marks;
};

int main()
{
  struct student s1,s2;
  printf("Enter the rollno,name,marks\n");
  scanf("%d%s%f",&s1.rollNo,s1.name,&s1.marks);
  printf("The struct s1,rollNo:%d name:%s marks:%f\n",s1.rollNo,s1.name,s1.marks);
  s2=s1;
  printf("[Before change] The struct s2,rollNo:%d name:%s marks:%f\n",s2.rollNo,s2.name,s2.marks);
  s1.rollNo=10000;
  printf("[after change] The struct s1,rollNo:%d name:%s marks:%f\n",s1.rollNo,s1.name,s1.marks);
  printf("[after change] The struct s2,rollNo:%d name:%s marks:%f\n",s2.rollNo,s2.name,s2.marks);
  if(s1.rollNo==s2.rollNo)
  {
     printf("Deep copy\n");
  }
  else
  {
     printf("shallow copy\n");
  }
  return 0;
}

#if 0
//output
Enter the rollno,name,marks
12 venkat 21.3
The struct s1,rollNo:12 name:venkat marks:21.299999
[Before change] The struct s2,rollNo:12 name:venkat marks:21.299999
[after change] The struct s1,rollNo:10000 name:venkat marks:21.299999
[after change] The struct s2,rollNo:12 name:venkat marks:21.299999
shallow copy
#endif
