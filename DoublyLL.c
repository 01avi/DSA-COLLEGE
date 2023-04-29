#include<stdio.h>
#include<stdlib.h>
typedef struct nodeType
{
struct nodeType *prev;
    int info;
    struct nodeType *next;
}node;
 node *head, *tail;
void createEmptyList(node **head, node **tail);
void traverseInOrder(node *head);
void traverseInReverseOrder(node *tail);
void insertAtBeginning(node **head, node **tail,int item);
void main()
{

    int ch,element;
    createEmptyList(&head,&tail);
    while(1)
    {
	printf("\nOption are :- \n");
	printf("\n========================\n");
	printf("\n 1. Insert at Beginning ");
	printf("\n 2. Traverse in order  ");
	printf("\n 3. Traverse in Reverse order  ");
	printf("\n 4. Exit \n\n ");
	printf("\n Enter your choice(1-10) : ");
	scanf("%d",&ch);
	switch(ch)
	{
	    case 1: printf("\nEnter element :");
		    scanf("%d",&element);
		    insertAtBeginning(&head,&tail,element);
		    break;
	    case 2: if(head == NULL)
		    printf("\nList is empty.....");
		    else
		    traverseInOrder(head);
		    
		    break;
	    case 3: if(head == NULL)
		    printf("\nList is empty.........");
		    else
		    traverseInReverseOrder(tail);
		    
		    break;
	    case 4: exit(0);
	}

    }
}
void createEmptyList(node **head,node **tail)
{
    *head= *tail=NULL;
}
void traverseInOrder(node *head)
{
    while(head != NULL)
    {
	printf("%d\n",head->info);
	head=head->next;
    }
}
void traverseInReverseOrder(node *tail)
{

while(tail!=NULL)
{
printf("%d",tail->info);
tail= tail->prev;
}
}
void insertAtBeginning(node **head, node **tail,int item)
{
node *ptr;
ptr=(node *)malloc(sizeof(node));
ptr->info=item;
if(*head ==NULL)
{
ptr->next=ptr->prev = NULL;
*head = *tail = ptr;
}
else{
ptr->prev=NULL;
ptr->next=*head;
(*head)->prev=ptr;
*head =ptr;
}
}