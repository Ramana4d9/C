/*
Find the middle of a node using a fast pointer
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void addAtBegin(struct node **p)
{
  struct node *new;
  new=(struct node *)malloc(sizeof(struct node));
  printf("Enter data to add at begin\n");
  scanf("%d",&new->data);
  new->next=NULL;
  if(*p==NULL)
  {
    *p=new;
  }
  else
  {
    new->next=*p;
    *p=new;
  }
  return;
}

void print(struct node *p)
{
  struct node *temp;
  temp=p;
  printf("The elements:");

  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
  return;
}

void addAtEnd(struct node **p)
{
  struct node *new,*temp1;
  new=(struct node *)malloc(sizeof(struct node));
  printf("Enter data to add at End\n");
  scanf("%d",&new->data);
  new->next=NULL;

  if(*p==NULL)
  {
    *p=new;
  }
  else
  {
    temp1=*p;
    while(temp1->next!=NULL)
    {
       temp1=temp1->next;
    }
    new->next=temp1->next;
    temp1->next=new;
  }
return;
}

//give the data and need to check the data is present ort not.
//If present then add the new node after that data.
void addAtPosition(struct node **p,int pos)
{
  struct node *new,*temp1,*temp2;
  new=(struct node *)malloc(sizeof(struct node));
  printf("Enter data to add\n");
  scanf("%d",&new->data);
  new->next=NULL;
  printf("data:%d,pos:%d\n",new->data,pos);

  if(*p == NULL)
  {
    *p=new;
    printf("Newly created node\n");
  }
  else
  {
    temp1=*p;
    while(temp1 != NULL)
    {
      if(temp1->data == pos)
      {
        new->next=temp1->next;
	temp1->next=new;
	break;
      }
      temp1=temp1->next;
    }
    if(temp1==NULL)
    {
       printf("data :%d is not present\n",pos);
    }
   }
return ;
}

/*
to find the Middle node,The faster pointer needs to move two steps
and slow pointer moves one step.So that when the fptr reaches the
end the sptr is in Middle.
*/
void middleNode(struct node *p)
{
  struct node *fptr,*sptr;
  fptr=p;
  sptr=p;
  while(fptr != NULL)
  {
    if((fptr->next ==NULL) || (fptr->next->next ==NULL))
    {
      break;
    }
    fptr=fptr->next->next;
    sptr=sptr->next;
  }
  printf("Conents of middle node:%d\n",sptr->data);
  return;
}


int main()
{
  int option,pos;
  struct node *hp=NULL;
  while(1)
  {
     printf("Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node\n");
     scanf("%d",&option);
     switch(option)
     {
        case 1:
          addAtBegin(&hp);
          break;
	case 2:
	  printf("Enter node data\n");
          scanf("%d",&pos);
          addAtPosition(&hp,pos);
	  break;
	case 3:
          addAtEnd(&hp);
          break;
	case 4:
          print(hp);
          break;
	case 5:
          exit(0);
          break;
	case 6:
	  middleNode(hp);
	  break;
	default:
          printf("None of the cases\n");
     }
  }
 return 0;
}

#if 0
//output-1
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
1
Enter data to add at begin
23
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
3
Enter data to add at End
44
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
1
Enter data to add at begin
35
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
4
The elements:35 23 44 
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
2
Enter node data
23
Enter data to add
40
data:40,pos:23
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
4
The elements:35 23 40 44 
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
6
Conents of middle node:23
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node
5

#endif

