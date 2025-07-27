#include<stdio.h>
int st[100],size,top = -1,val;
void push(int val);
int pop();
void display();
int main()
{
	int choice;
	scanf("%d",&size);
	while(1)
	{
		printf("1.Push 2.Pop 3.Display 4.Exit:  ");
		scanf("%d",&choice);
		if(choice==1)
		{
			scanf("%d",&val);
			push(val);
		}
		else if(choice == 2)
		{
			val = pop();
			if(val == -1)
			{
				printf("Stack is empty/Underflow\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(choice == 3)
		{
			//display
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
		printf("Stack is full/Overflow\n");
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
		return top;
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
		printf("Stack is empty / Underflow \n");
	}
	else
	{
		for(i = top;i >= 0;i--)
		{
		    printf("%d ",st[i]);
		}
		printf("\n");
    }
}