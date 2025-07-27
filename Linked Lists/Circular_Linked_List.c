#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head = NULL, *tail = NULL, *NN,*temp,*res;
int pos;
NODE * Newnode(int val);
void insert_at_head(NODE *NN);
void insert_at_tail(NODE *NN);
void insert_by_position(NODE *NN,int pos);
void display();
NODE *delet_at_head();
NODE *delet_at_tail();
NODE *delet_by_position(int pos);
int main()
{
	int ch,val;
	while(1)
	{
		printf("1.Insert at head\t2.Insert at tail\t3.Insert by position\t4.Delete at head\t5.Delete at tail\n");
		printf("6.Delete by position\t7.Display\t8.Get head\t9.Get tail\t10.Exit:  ");
		scanf("%d",&ch);
		if(ch==1)
		{
			//Insert at head
			scanf("%d",&val);
			NN = Newnode(val);
			insert_at_head(NN);
		}
		else if(ch==2)
		{
			//Insert at tail
			scanf("%d",&val);
			NN = Newnode(val);
			insert_at_tail(NN);
		}
		else if(ch==3)
		{
			//Insert by position
			scanf("%d",&val);
			scanf("%d",&pos);
			NN = Newnode(val);
			insert_by_position(NN,pos);
		}
		else if(ch==4)
		{
			//delete at head
			res = delet_at_head();
			if(res==NULL)
			{
			     printf("NO Nodes\n");	
			}	
			else
			{
				printf("%d\n",res->data);
				free(res);
			}
		}
		else if(ch==5)
		{
			//delete at tail
			res = delet_at_head();
			if(res==NULL)
			{
			     printf("NO Nodes\n");	
			}	
			else
			{
				printf("%d\n",res->data);
				free(res);
			}
		}
		else if(ch==6)
		{
			//delete by position
			scanf("%d",&pos);
			res = delet_by_position(pos);
			if(res==NULL)
			{
			     printf("NO Nodes\n");	
			}	
			else
			{
				printf("%d\n",res->data);
				free(res);
			}
		}
		else if(ch==7)
		{
			//display
			display();
		}
		else if(ch==8)
		{
			//Get head
			printf("%d\n",head);
		}
		else if(ch==9)
		{
			//Get tail
			printf("%d\n",tail);
		}
		else
		{
			break;
		}
	}
}
NODE * Newnode(int val)
{
	NN = (NODE *)malloc(sizeof(NODE));
	NN->data = val;
	NN->next = NULL;
	return NN;
}
void insert_at_head(NODE *NN)
{
	if(head==NULL&&tail==NULL)
	{
		head=NN;
		tail=NN;
		head->next = head;
	}
	else
	{
		NN->next=head;
		head = NN;
		tail->next = head;
	}
}
void insert_at_tail(NODE *NN)
{
	if(head==NULL&&tail==NULL)
	{
		head=NN;
		tail=NN;
		head->next = head;
	}
	else
	{
		tail->next=NN;
		tail = NN;
		tail->next = head;
	}
}
void insert_by_position(NODE *NN,int pos)
{
	int p;
	temp=head;
	for( p = 1; p < pos-1; p++ )
	{
		if(temp->next==head)
		{
			printf("Insertion is not possible\n");
			return;
		}
		temp=temp->next;
	}
	NN->next = temp->next;
    temp->next = NN;	
}
void display()
{
	if(head==NULL && tail==NULL)
	{
		printf("No nodes\n");
		return;
	}
	else
	{
	    temp=head;
		while(temp->next!=head)
		{
		    printf("%d %d %d\n",temp,temp->data,temp->next);	
		    temp = temp->next;
		}
		printf("%d %d %d\n",temp,temp->data,temp->next);	
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
		res=head;
		head = head->next;
		tail->next  = head;
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
		temp=head;
		while(temp->next->next!=head)
		{
			temp=temp->next;
		}
		res = tail;
		temp->next = head;
		tail=temp;
		res->next  = NULL;
		return res;
	}
}
NODE *delet_by_position(int pos)
{
	int p=1;
	temp=head;
	p=1;
	while(p<pos-1)
	{
		if(temp->next==head)
		{
			printf("Deletion is not possible\n");
			return NULL;
		}
		temp=temp->next;
		p++;
	}
	res=temp->next;
	temp->next=res->next;
	res->next=NULL;
	return res;
}