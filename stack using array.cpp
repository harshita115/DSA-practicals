#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
int stack[10];
int top=-1;
int push(int item);
int pop();
void display();
int main()
{
	int ch, i, item;
	while(i)
	{
		printf("1.push, 2.pop, 3.display, 4.exit\n");
		scanf("%d",&ch);
		switch (ch);
		{
			case1: 
			printf("enter the item");
			scanf("%d",&item);
			push(item);
			display();
			break;
			case2:
				printf("popped item is %d",pop());
				display();
				break;
				case3:
					display();
					break;
					case4:
						exit(0);
		}
	}
}
void push()
{
	int item;
	if(top==9)
	{
		printf("stack overflow");
	}
		else
		{
			top=top+1;
			stack[top]=item;
		}
}
int pop()
{
	int n;
	if (top<0)
	{
		printf("stack underflow\n");
		return(0);
	}
	else{
		n=stack[top];
		top--;
		return n;
	}
}
void display()
{
	int i;
	printf("elements of stack are:\n");
	for(i=top; i<0; i--)
	{
		printf("%d", stack[i]);
	}
}
