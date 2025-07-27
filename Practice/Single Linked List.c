#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head = NULL,*tail = NULL,*NN,*res,*temp;
int pos,val;
NODE *Newnode(int val);
NODE *delet(NODE *res);
void ins_tail(NODE *NN);
void ins_head(NODE *NN);
void ins_pos(NODE *NN,int pos);
NODE *del_tail()
NODE *del_head()
NODE *del_pos(int pos);
void reverse();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("1.Ins_tail  2.Ins_head  3.Ins_pos  4.Del_tail  5.Del_head  6.Del_pos  7.Reverse  8.Display  9.Exit : ");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			NN = Newnode(val);
			ins_tail(NN);
		}
		else if(ch==2)
		{
			scanf("%d",&val);
			NN = Newnode(val);
			ins_head(NN);
		}
		else if(ch==3)
		{
			scanf("%d",&val);
			scanf("%d",&pos);
			NN = Newnode(val);
			ins_pos(NN,pos);
		}
		else if(ch==4)
		{
			res = del_tail();
			delet(res);
		}
		else if(ch==5)
		{
			res = del_head();
			delet(res);
		}
		else if(ch==6)
		{
			scanf("%d",&pos);
			res = del_pos(pos);
			delet(res);
		}
		else if(ch==7)
		{
			reverse();
		}
		else if(ch==8)
		{
			display();
		}
		else
		{
			break;
		}
	}
	
}
NODE *Newnode(int val)
{
	NN = (NODE *)malloc(sizeof(NODE));
	NN->data = val;
	NN->next = NULL;
	return NN;
}
NODE *delet(NODE *res)
{
	if(res==NULL)
	{
		printf("No nodes\n");
	}
	else
	{
		printf("%d\n",res->data);
		free(res);
	}
}
void ins_tail(NODE *NN)
{
	if(head == NULL && tail == NULL)
	{
		head = NN;
		tail = NN;
	}
	else
	{
		tail->next = NN;
		tail = NN;
	}
}
void ins_head(NODE *NN)
{
	if(head == NULL && tail == NULL)
	{
		head = NN;
		tail = NN;
	}
	else
	{
		NN->next = head;
		head = NN;
	}
}
void ins_pos(NODE *NN,int pos)
{
	int p,flag = 0;
	temp = head;
	for ( p = 1; p < pos-1; p++)
	{
		if(temp == NULL)
		{
			printf("Insertion is not possible\n");
			flag = 1;
			break;
		}
		temp = temp->next;
	}
	if(flag == 0)
	{
		NN->next = temp->next;
		temp->next = NN;
	}
}
NODE *del_tail()
{
	if(head == NULL && tail == NULL)
	{
		return NULL;
	}
	else if(head == tail)
	{
		res = head;
		head = NULL;
		tail = NULL;
		return res;
	}
	else
	{
		temp = head;
		while(temp->next->next)
		{
			temp = temp->next;
		}
		res = tail;
		temp->next = NULL;
		tail = temp;
		return res;
	}
}
NODE *del_head()
{
	if(head == NULL && tail == NULL)
	{
		return NULL;
	}
	else if(head == tail)
	{
		res = head;
		head = NULL;
		tail = NULL;
		return res;
	}
	else
	{
		temp = head;
		head = head->next;
		temp->next = NULL;
		return temp;
	}
}
NODE *del_pos(int pos)
{
	int p,flag = 0;
	if(head == NULL && tail == NULL)
	{
		return NULL;
	}
	else
	{
		temp = head;
		for ( p = 1; p < pos-1;p++)
		{
			if(temp == NULL)
			{
				return NULL;
			}
			temp = temp->next;
		}
		res = temp->next;
		temp->next = temp->next->next;
		res->next = NULL;
		return res;
	}
}
void reverse()
{
	NODE *prev = NULL,*next = NULL,*cur;
	if(head == NULL && tail == NULL)
	{
		printf("No nodes\n");
	}
	else if(head == tail)
	{
		printf("No need since list has only single element\n");
	}
	else
	{
		tail = head;
		cur = head;
		while(cur)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		head = prev;
	}
}
void display()
{
	if(head == NULL && tail == NULL)
	{
		printf("No nodes\n");
	}
	else
	{
		temp = head;
		while(temp)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
		printf("\n");
	}
}