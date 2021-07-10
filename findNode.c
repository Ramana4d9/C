/*
Find 1/4th and 3/4th node of given LinkedList
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


/*
To find the one-fourth node,
  The faster pointer needs to move four steps
and slow pointer moves one step.
So that when the fptr reaches the end,the sptr is in one-fourth position.
*/
void oneFourthNode(struct node *p)
{
  struct node *fptr,*sptr;
  fptr=p;
  sptr=p;
  while(fptr != NULL)
  {
    if((fptr->next ==NULL) || (fptr->next->next ==NULL) || (fptr->next->next->next == NULL) || (fptr->next->next->next->next ==NULL))

    {
      break;
    }
    fptr=fptr->next->next->next->next;
    sptr=sptr->next;
  }
  printf("Conents of one-fouth node:%d\n",sptr->data);
  return;
}


/*
To find the three-fourth node,
  The faster pointer needs to move four steps
and slow pointer moves three step.
So that when the fptr reaches the end,the sptr is in three-fourth position.
*/
void threeFourthNode(struct node *p)
{
  struct node *fptr,*sptr;
  fptr=p;
  sptr=p;
  while(fptr != NULL)
  {
    if((fptr->next ==NULL) || (fptr->next->next ==NULL) || (fptr->next->next->next == NULL) || (fptr->next->next->next->next==NULL))

    {
      break;
    }
    fptr=fptr->next->next->next->next;
    sptr=sptr->next->next->next;
  }
  printf("Conents of three-fourth node:%d\n",sptr->data);
  return;
}


/*
To find last but one node.
fptr moves first time one step ahead.
so fptr comes to end of the node the slow pointer will be one step back.
*/
void lastBeforeNode(struct node *p)
{
  struct node *fptr,*sptr;
  fptr=p->next;
  sptr=p;
  while(fptr->next != NULL)
  {
    fptr=fptr->next;
    sptr=sptr->next;
  }
  printf("Conents of last before node:%d\n",sptr->data);
  return;
}


/*
To find last but one node.
fptr moves first time one step ahead.
so fptr comes to end of the node the slow pointer will be one step back.
*/
int main()
{
  int option,pos;
  struct node *hp=NULL;
  while(1)
  {
     printf("Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node 9.Last-before Node\n");
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
	case 7:
	  oneFourthNode(hp);
	  break;
	case 8:
	  threeFourthNode(hp);
	  break;
	case 9:
	  lastBeforeNode(hp);
	  break;
	default:
          printf("None of the cases\n");
     }


  }
 return 0;
}

#if 0
//output
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
1
Enter data to add at begin
11
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
1
Enter data to add at begin
22
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
3
Enter data to add at End
33
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
3
Enter data to add at End
44
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
3
Enter data to add at End
55
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
4
The elements:22 11 33 44 55
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
1
Enter data to add at begin
90
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
2
Enter node data
11
Enter data to add
12
data:12,pos:11
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
4
The elements:90 22 11 12 33 44 55
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
6
Conents of middle node:12
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
7
Conents of one-fouth node:22
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
3
Enter data to add at End
100
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
3
Enter data to add at End
120
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
3
Enter data to add at End
130
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
4
The elements:90 22 11 12 33 44 55 100 120 130
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
7
Conents of one-fouth node:11
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
8
Conents of three-fourth node:55
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit 6.middle Node 7.one-fourth node 8.three-fourth node
5
#endif


