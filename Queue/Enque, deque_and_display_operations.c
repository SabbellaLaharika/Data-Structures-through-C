#include<stdio.h>
void enque(int val);
void display();
int deque();
int rear=-1,front=-1,queue[100],i,size,val;
int main()
{
	int ch;
	scanf("%d",&size);
	while(1)
	{
		printf("1.Enque 2.Deque 3.Display 4.Exit: ");
		scanf("%d",&ch);
		if(ch==1)
			{
				scanf("%d",&val);     //Enque operation
				enque(val);
			}
		else if(ch==2)
			{
				val = deque();     //Deque operation
				if(val==-1)
				{
					printf("Queue is Empty\n");
				}
				else
				{
					printf("%d\n",val);
				}
			}
		else if(ch==3)
			{
				display();
			}
		else if(ch==4)
			{
				break;
			}
	}
}
void enque(int val)
{
	if(rear==size-1)
	{
		printf("Queue is full\n");
		return;
	}
	else if(front==-1 && rear==-1)
	{
		rear=0, front=0;
		queue[rear]=val;
	}
	else
	{
		rear++;
		queue[rear]=val;
	}
}
int deque()
{
	if(front==-1&&rear==-1)
	{
		val = -1;
	}
	else if(front==rear)
	{
		val = queue[front];
		front = -1;
		rear = -1;
	}
	else
	{
		val = queue[front];
		front++;
	}
	return val;
}
void display()
{
	int i;
	if(rear==-1 && front==-1)
	{
		printf("Queue is empty\n");
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