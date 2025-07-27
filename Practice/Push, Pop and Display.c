#include<stdio.h>
int st[100],size,val,top = -1;
void push(int val);
int pop();
void display();
int main()
{
	int ch;
	scanf("%d",&size);
	while(1)
	{
		printf("1.Push  2.Pop  3.Display  4.Exit : \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			push(val);
		}
		else if(ch==2)
		{
			val = pop();
			if(val==-1)
			printf("Stack is empty or underflow\n");
			else
			printf("%d\n",val);	
		}
		else if(ch==3)
		{
			display();
		}
		else
		{
			break;
		}
	}
}
void push(int val)
{
    if(top == size-1)
	{
		printf("Stack is full or overflow\n");
	}	
	else
	{
		st[++top] = val;
	}
}
int pop()
{
	if(top == -1)
	{
		return -1;
	}
	else
	{
		val = st[top];
		st[top--] = 0;
		return val;
	}
}
void display()
{
	int i;
	if(top == -1)
	{
		printf("Stack is empty or underflow\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d ",st[i]);
		}
	}
}