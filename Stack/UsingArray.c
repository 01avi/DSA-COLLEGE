#include<stdio.h>
#define N 5
int stack[N];
int top = -1;

void push(){
	int x;
        printf("Enter data:-");
        scanf("%d", &x);
    if(top==N-1){
    	printf("Stack OverFlow\n");
    	printf("Entered Data Is Not Stored\n");
    }
    else{
    	top++;
        stack[top] = x;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("UnderFlow\n");
    }
    else{
        item = stack[top];
        top--;
        printf("Poped item is:- %d", item);
    }
}

void peek(){
	if(top==-1){
		printf("Stack Is Empty");
	}
	else{
		printf("Top Element of stack is:- %d", stack[top]);
	}
}

void display(){
    int i;
    printf("Stack= ");
    for (i = top; i >= 0;i--){
        printf("%d ", stack[i]);
    }
}

void main(){
	int ch;
	do{
    printf("\nEnter your choice\n");
    printf("1: PUSH\n2: POP\n3: PEEK ELEMENT\n4: DISPLAY\n0: EXIT\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:{
        push();
        break;
    }
    case 2:{
        pop();
        break;
    }
    case 3:{
        peek();
        break;
    }
    case 4:{
        display();
        break;
    }
    default:{
        printf("INVALID CHOICE");
        break;
    }
}
}while(ch!=0);
}
