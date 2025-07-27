#include<stdio.h>
int queue[100],size,rear=-1,front=-1;
void enque_rear(int val);
int deque_front();
void enque_front(int val);
int deque_rear();
void display();
int main()
{
	int ch,val;
	scanf("%d",&size);
	while(1)
	{
		printf("1.Enque at rear\n2.Deque at front\n3.Display\n4.Enque at Front\n5.Deque at rear\n6.Get rear\n7.Get Front\n8.Exit: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			enque_rear(val);
		}
		else if(ch==2)
		{
			val = deque_front();      //deque at front
			if(val==-1)
			{
				printf("Queue is empty\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			display();      //display
		}
		else if(ch==4)
		{
			scanf("%d",&val);      //enque at front
			enque_front(val);
		}
		else if(ch==5)
		{
			val=deque_rear();
			if(val==-1)
			{
				printf("Queue is empty\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==6)
		{
			printf("%d\n",rear);
		}
		else if(ch==7)
		{
			printf("%d\n",front);
		}
		else if(ch==8)
		{
			break;
		}
	}
}
void enque_rear(int val)
{
	if(front==0 && rear==size-1)
	{
		printf("Queue is full\n");
	}
	else if(rear==front-1)
	{
		printf("Queue is full\n");
	}
	else if(rear==-1&&front==-1)
	{
		rear=0,front=0;
		queue[rear]=val;
	}
	else
	{
		rear=(rear+1)%size;
		queue[rear]=val;
	}
}
int deque_front()
{
	int val;
	if(front==-1&&rear==-1)
	{
		val=-1;
	}
	else if(front==rear)
	{
		val=queue[front];
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
	if(rear==-1&&front==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		int i=front;
		while(i!=rear)
		{
			printf("%d ",queue[i]);
			i=(i+1)%size;
		}
		printf("%d ",queue[i]);
	}
}
void enque_front(int val)
{
	if(front==0&&rear==size-1)
	{
		printf("Queue is full\n");
	}
	else if(rear==front-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1&&rear==-1)
	{
		rear=0,front=0;
		queue[front]=val;
	}
	else if(front=0)
	{
		front=size-1;
		queue[front]=val;
	}
	else
	{
		front--;
		queue[front]=val;
	}
}
int deque_rear()
{
	int val;
	if(rear==-1&&front==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		val=queue[rear];
		front=-1;
		rear=-1;
	}
	else if(rear==0)
	{
		val=queue[rear];
		rear=size-1;
	}
	else
	{
		val=queue[rear];
		rear--;
	}
	return val;
}