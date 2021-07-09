/*
WAP for Linked list to Inserting Element at the front.
*/

#include<stdio.h>
#include<stdlib.h>

struct hostel
{
  int room;
  struct hostel *next;
};

void add_front(struct hostel **p)
{
  struct hostel *new;
  new=(struct hostel *)malloc(sizeof(struct hostel));
  printf("Enter room No:\n");
  scanf("%d",&new->room);
  
  //no nodes are present
  if(*p==NULL)
  {
    *p=new;
     new->next=NULL;
     printf("First time\n");
  }

  //If nodes are present,We are copying the head node contents in new->next and updating the head pointer.
  else
  {
    new->next=*p;
    *p=new;
  }

  return;
}

void print(struct hostel *p)
{
  struct hostel *temp=p;
  printf("print fun is called\n");
  while(temp!= NULL)
  {
    printf("Data:%d\n",temp->room);
    temp=temp->next;
  }
return;
}

int main()
{
  int option;
  struct hostel *hp=NULL;
  while(1)
  {
    printf("Select option 1.Add 2.Print 3.Exit\n");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
        add_front(&hp);
        break;
      case 2:
        print(hp);
        break;
      case 3:
        exit(0);
        break;
      default:
        printf("Wrong option is selected \n");
    }
  }
  return 0;
}

#if 0
//output
Select option 1.Add 2.Print 3.Exit
1
Enter room No:
23
First time
Select option 1.Add 2.Print 3.Exit
1
Enter room No:
45
Select option 1.Add 2.Print 3.Exit
2
print fun is called
Data:45
Data:23
Select option 1.Add 2.Print 3.Exit
1
Enter room No:
33
Select option 1.Add 2.Print 3.Exit
2
print fun is called
Data:33
Data:45
Data:23
Select option 1.Add 2.Print 3.Exit
3
#endif


