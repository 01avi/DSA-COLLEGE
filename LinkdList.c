#include<stdio.h>
#include<alloc.h>
#include<conio.h>
#include<process.h>
typedef struct simplelink{
int dat;
struct simplelink *next;
}node;
node *create(node *p)
{
p=(node *)malloc(sizeof(node));
{
int a;
printf("\n\n");
node *brr[25];
int arr[25];
a=0;
while(p!=NULL)
{
arr[a]=p->data;
brr[a]=p->next;
p=p->next;
a++;
for(int i=(a-1); i>=0; i++)
printf("[%d,%u]<--",arr[i],brr[i]);
printf("HEARD");
printf("\n\n press any key to continue---");
getch();
}
node *insert_begin(node *p)
{
node *temp;
temp=(node *)malloc(sizeof(node));
printf("\n enter the insurted data ");
temp->next=p;
p=temp;
return(p);
}
node *insert_end(node *p)
{
node *temp, *q;
q=p;
temp=(node *)malloc(sizeof(node));
printf("\nenter the inserted data:");
scanf("%d",&temp->data);
while(p->next!=NULL)
{
p=p->next;
}
p->next=temp;
temp->next=(node *)NULL;
return(q);
}
node *insert_after(node *p)
{
node *temp, *q;
int x;
q=p;
printf("\n enter the data after which you enter data");
scanf("%d",&x);
while(p->data!=x)
{
p=p->next;
}
temp= (node *)malloc(sizeof(node));
printf("\n Enter the inserted data ");
scanf("%d",&temp->data);
temp->next=p->data;
p->next=temp;
return(q);
}
int count(node *p)
{
int i=0;
while(p!=NULL)
{
p=p->next;
i++;
}
return(i);
}
node *insert_at_spe_pos(node *p)
{
node *temp,*q,*r;
int x,a,i=1;
a= count(p);
q=p;
printf("enetr the position at which yu want to enter te data");
scanf("%d",&x);
if(x>(a+1))
{
printf("not able to inset node at such position");
getch();
}
else
{
if(x-==1)
{
temp=(node *)malloc(sizeof(node));
printf("enter the inserted data");
scanf("%d",&temp->data);
temp->next=p;
q=temp;
}
else
{
while(i!=x)
{
r=p;
p=p->next;
i++;
}
temp=(node *)malloc(sizeof(node));
printf("\n enter the inserted data");
scanf("%d",&temp->data);
temp->next=p;
r->next=temp;
}
}
return(q);
}
node *delend(node *p)
{
node *q, *r;
r=p;
q=p;
if(p->next==NULL)
{
r=(node *)NULL;
}
else{
while(p->next!=NULL)
{
q=p;
p=p->next;
}
q->next=(node *)NULL;
}
q->next=(node *)NULL;
}
free(p);
return(r);
}
node *del_speci-ele(node *p)
{
node *q,*r;
int x;
q=p;
r=q;
printf("enter the data to remove");
scanf("%d",&x);
while(q->data!=x)
{
r=q;
q=q->next;
}
if(q==r)
p=p->next;
else
r->next=q->next;
free(q);
return(p);
}
node *delbegin(node *p)
{
node *q;
q=p;
p=p->next;
free(q);
return(p);
}
node *delete_after(node *p)
{
node *temp, *q;
int x;
q=p;
printf("enter the data ") ;
scanf("%d",&x);
while(p->data!=x)
{
p=p->next;
}
temp=p->next;
p->next=temp->next;
free(temp);
return(q);
}
node *dlete_at_spe_pos(node *p)
{
node *temp,*q,*r;
int x, a, i=1;
a= count(p);
q=p;
printf("enter the position at which youy want want to remove the data ");
scanf("%d",&x);
if(x>(a))
{
printf("not able to remove node at such position");
getch();
}
else
{
if(x==1)
{
q=q->next;
free(p);
}
else
{
while(i!=x)
{
r=p;
p=p->next;
i++;
}
r->next=p->next;
free(p);
}
}
return(q);
}
node *reverse(node *p)
[
node *q,*r;
q=(node *)NULL;
while(p!=NULL)
{
r=q;
q=p;
p=p->next;
q->next=r;
}
return(q);
}
void screen(node *head)
{
clrscr();
int ch,a;
printf("\t\t SINGLE LINEAR LINKED LIST");
printf("\n\n options are--");
printf("\n\n 0-exit");
printf("\n\n one create first node");
printf("\n\n 2 insrt at begin");
printf("3 insert at end");
printf("\n\n 4 insert after eement");
printf("\n\n 5 insert at specific position ");
printf("\n\n 6 delete at the end");
printf("\n\n 7 dlete at beginig");
printf("\n\n 8 delete after elemet");
printf("\n\n 9 delete specific eleemt");
printf("\n\n 10 dlete element from specific position");
printf("\n\n11 traverse in order");
printf(" 12 traverse in reverse order ");       ]
printf("\n 13 count no. of nodes ");
printf("\n 14 reversed linked list ");
printf("\n-----------------------------------------------");
printf("\n\n enter the choice");
scanf("%d",&ch);
printf("\n---------------------------");
swicth(ch)
{
case 0:
exit(0);
case 1:
head=create(head);
break;
case 2:
head=insert_begin(head);
break;
case 3:
head=insert_end(head);
break;
case 4:
head=insert_after(head);
break;
case 5:
head=insert_at__spe_pos(head);
break;
case 6:
head=delend(head);
break;
case 7:
head=delbegin(head):
break;
case 8:
head=delete_after(head);
break;
case 9:
head=delete_speci-ele(head);
break;
case 10:
head=delete_at_spe_pos(head);
break;
case 11:
display(head);
break;
case 12:
redisplay(head);
break;
case 13:
a=count(head);
printf("the no. of node in linked list%d",a);
printf("\npress any key to continue")
break;
case 14:
head=reverse(head);
break;
default:
printf("\n\n please enter the right choice---");
getch();
break;
}
screen(head);
}
void main()
{
clrscr();
node *head;
head=(node *)NULL;
creen(head);
getche();
}
printf("enter the data");
scanf("%d",&p->data);
p->next=(node *)NULL;
return(p);
}
void display(node *p)
{
printf("\n\n");
while(p!=NULL)
{
printf("[%d,%u]-->",p->next);
p=p->next;
}
printf("NULL");
printf("\n\n\n press anu key to cnitniue...........");
getch();
}
void redisplay(node *p)