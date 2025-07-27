#include<stdio.h>
void enque(int val);
int deque();
void display();
int front = -1, rear = -1, size, val, i, res,queue[100];
int main()
{
	int ch;
	scanf("%d",&size);
	while(1)
	{
		printf("1.Enque  2.Deque  3.Display  4.Exit : ");
		scanf("%d",&ch);
		if ( ch == 1 )
		{
			scanf("%d",&val);
			enque(val);
		}
		else if ( ch == 2 )
		{
			res = deque();
			if(res == -1)
			{
				printf("Queue is empty or underflow\n");
			}
			else
			{
				printf("%d",res);
			}
		}
		else if (ch == 3)
		{
			display();
		}
		else
		{
			break;
		}
	}
	
}
void enque(int val)
{
	if(rear == size-1)
	{
		printf("Queue is full or overflow\n");
		return;
	}
	else if(rear == -1 && front == -1)
	{
		rear = 0;
		front = 0;
		queue[rear] = val;
	}
	else
	{
		queue[++rear] = val;
	}
}
int deque()
{
	if(rear == -1 && front == -1)
	{
		val = -1;
	}
	else if(front == rear)
	{
		val = queue[front];
		front = -1;
		rear = -1;
	}
	else
	{
		val = queue[front++];
	}
	return val;
}
void display()
{
	int i;
	if(rear == -1 && front == -1)
	{
		printf("Queue is empty or underflow\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("\n");
	}
}