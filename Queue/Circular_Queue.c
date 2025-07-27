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
		printf("1.Enque 2.Deque 3.Display 4.View Front 5.View Rear 6.Exit: ");
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
		    	printf("%d\n",front);
			}
		else if(ch==5)
		    {
		    	printf("%d\n",rear);
			}
		else
			{
				break;
			}
	}
}
void enque(int val)
{
	if(rear==front-1)
	{
		printf("Queue is full\n");
	}
	else if(front==0&&rear==size-1)
	{
		printf("Queue is full\n");
		return;
	}
	else if(front==-1 && rear==-1)
	{
		rear=0;
		front=0;
		queue[rear]=val;
	}
	else
	{
		rear=(rear+1)%size;
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
		front=(front+1)%size;
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
		i=front;
		while(i!=rear) 
		{
			printf("%d ",queue[i]);
			i=(i+1)%size;
		}
		printf("%d ",queue[i]);
	}
}