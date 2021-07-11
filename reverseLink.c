/*
Insert node at the given position
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

//counting number of nodes
int countNodes(struct node *p)
{
  int l;
  struct node *temp;
  temp=p;

  l=0;
  while(temp!=NULL)
  {
     temp=temp->next;
     l++;
  }
  printf("Number of nodes:%d\n",l);
  return l;
}


//The link is reversed.
//Last node become first node and vice-versa
void reverseLink(struct node **p)
{
  int l,i,j;
  struct node *temp;
  temp=*p;
  l=countNodes(*p);
  struct node *d[l];
  temp=*p;
  for(i=0;i<l;i++)
  {
     d[i]=temp;
     temp=temp->next;
  }
  
  for(i=1;i<l;i++)
  {
     d[i]->next=d[i-1];
  }
  d[0]->next=NULL;
  *p=d[l-1];
  
  return;
}

//reverse print using recursion
void reversePrintUsingRecursion(struct node *p)
{
   struct node *temp;
   temp=p;
   if(temp!=NULL)
   {
     reversePrintUsingRecursion(temp->next);
     printf("%d ",temp->data);
   }
   else
   {
     return;
   }
}

//Reverse print using array of pointers
void reversePrint(struct node *p)
{
  int l,i,j;
  struct node *temp;
  temp=p;
  l=countNodes(temp);
  struct node *d[l];

  for(i=0;i<l;i++)
  {
     d[i]=temp;
     temp=temp->next;
  }
  
  printf("reverse data:");
  for(i=l-1;i>=0;i--)
  {
    printf("%d ",d[i]->data);
  }
  printf("\n");

return;
};

int main()
{
  int option,pos;
  struct node *hp=NULL;
  while(1)
  {
     printf("Enter option,1.Add at begin 2.Add at position 3.Add at end  4.Print 5.Exit 6.ReverseLink 7.reversePrint using recursion 8.reversePrint\n");
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
	  reverseLink(&hp);
	  break;
	case 7:
	  reversePrintUsingRecursion(hp);
	  break;
	case 8:
	  reversePrint(hp);
	  break;
	default:
          printf("None of the cases\n");
     }
  }
 return 0;
}

#if 0
//output
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit
3
Enter data to add at End
45
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit
3
Enter data to add at End
46
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit
4
The elements:45 46
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit
1
Enter data to add at begin
22
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit
2
Enter node data
33
Enter data to add
54
data:54,pos:33
data :33 is not present
Enter option,1.Add at begin 2.Add at position 3.Add at end   4.Print 5.Exit
5

#endif
