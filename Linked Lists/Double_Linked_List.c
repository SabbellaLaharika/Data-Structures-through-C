#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head = NULL, *tail = NULL, *temp,*NN,*res;
int pos;
NODE * newnode(int val);
void insert_at_head(NODE *NN);
void insert_at_tail(NODE *NN);
void insert_by_position(NODE *NN,int pos);
NODE *delet_at_head();
NODE *delet_at_tail();
NODE *delet_by_position();
void display_from_head_to_tail();
void display_from_tail_to_head();
int main()
{
	int ch,val;
	while(1)
	{
		printf("1.Insert at head\t2.Insert at tail\t3.Insert by position\t4.Delete at head\t5.Delete at tail\n6.Delete by position\t7.Display from head to tail\t8.Display from tail to head\t9.Exit:  ");
		scanf("%d",&ch);
		if(ch==1)
		{
			//Insert at head
			scanf("%d",&val);
			NN = newnode(val);
			insert_at_head(NN);
		}
		else if(ch==2)
		{
			//Insert at tail
			scanf("%d",&val);
			NN = newnode(val);
			insert_at_tail(NN);
		}
		else if(ch==3)
		{
			//Insert by position
			scanf("%d",&val);
			scanf("%d",&pos);
			NN = newnode(val);
			insert_by_position(NN,pos);
		}
		else if(ch==4)
		{
			//Delete at head
			res = delet_at_head();
			if(res==NULL)
			{
			     printf("NO Nodes\n");	
			}	
			else
			{
				printf("%d",res->data);
				free(res);
			}
		}
		else if(ch==5)
		{
			//Delete at tail
			res = delet_at_tail();
			if(res==NULL)
			{
			     printf("NO Nodes\n");	
			}	
			else
			{
				printf("%d",res->data);
				free(res);
			}
		}
		else if(ch==6)
		{
			//Delete by position
			scanf("%d",&pos);
			res = delet_by_position(pos);
			if(res==NULL)
			{
			     printf("NO Nodes\n");	
			}	
			else
			{
				printf("%d",res->data);
				free(res);
			}
		}
		else if(ch==7)
		{
			//Display from head to tail
			display_from_head_to_tail();
		}
		else if(ch==8)
		{
			//Display from tail to head
			display_from_tail_to_head();
		}
		else
		{
			break;
		}
	}
}
NODE * newnode(int val)
{
	NN = (NODE *)malloc(sizeof(NODE));
	NN->data=val;
	NN->prev=NULL;
	NN->next=NULL;
	return NN;
}
void insert_at_head(NODE *NN)
{
	if(head==NULL&&tail==NULL)
	{
		head = NN;
		tail = NN;
	}
	else
	{
		NN->next=head;
		head->prev=NN;
		head=NN;
	}
}
void insert_at_tail(NODE *NN)
{
	if(head==NULL&&tail==NULL)
	{
		head = NN;
		tail = NN;
	}
	else
	{
		tail->next=NN;
		NN->prev=tail;
		tail=NN;
	}
}
void insert_by_position(NODE *NN,int pos)
{
	int p;
	if(head==NULL&&tail==NULL)
	{
		head = NN;
		tail = NN;
	}
	else
	{
		p = 1;
		temp=head;
		while(p<pos-1)
		{
			if(temp == NULL)
			{
				printf("Insertion is not possible\n");
				return;
			}
			temp = temp->next;
			p++;
		}
		NN->next = temp->next;
		NN->prev = temp;
		temp->next = NN;
	    NN->next->prev = NN;
	}
}
void display_from_head_to_tail()
{
	if(head==NULL&&tail==NULL)
	{
		printf("No nodes\n");
	}
	else
	{
		temp = head;
		while(temp)
		{
			printf("%d %d %d %d\n",temp,temp->prev,temp->data,temp->next);
			temp = temp->next;
		}
	}
}
void display_from_tail_to_head()
{
	if(head==NULL&&tail==NULL)
	{
		printf("No nodes\n");
	}
	else
	{
		temp = tail;
		while(temp)
		{
			printf("%d %d %d %d\n",temp,temp->prev,temp->data,temp->next);
			temp = temp->prev;
		}
	}
}
NODE *delet_at_head()
{
	if(head==NULL&&tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		res = head;
		head = head->next;
		head->prev = NULL;
		res->next = NULL;
		return res;
	}
}
NODE *delet_at_tail()
{
	if(head==NULL&&tail==NULL)
	{
		return NULL;
	}
	else if(head==tail)
	{
		res=head;
		head=NULL;
		tail=NULL;
		return res;
	}
	else
	{
		res = tail;
		tail = tail->prev;
		tail->next = NULL;
		res->prev = NULL;
		return res;
	}
}
NODE *delet_by_position(int pos)
{
	int p;
	temp = head;
	for ( p = 1; p < pos-1; p++ )
	{
		if ( temp->next == head )
		{
			printf("Deletion is not possible\n");
			return NULL;
		}
		temp = temp->next;
	}
	res = temp->next;
	temp->next = temp->next->next;
	res->prev = temp;
	res->prev = NULL;
	res->next = NULL;
	return res;
}