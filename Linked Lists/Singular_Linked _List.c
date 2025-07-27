#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head = NULL ,*tail = NULL ,*temp,*NN,*res;         //NN = Next Node          Cur = current node
int pos;
void insert_at_tail(NODE *NN);
NODE *delet_at_tail();
void display();
void insert_at_head(NODE *NN);
NODE *delet_at_head();
void reverseLL();
void insert_by_position(NODE *NN,int pos);
NODE *delet_by_position();
int main()
{
	int ch,val;
	while(1)
	{
		printf("1.Insert at tail\n2.Delete at tail\n3.Display\n4.Insert at head\n5.Delete at head\n6.Reverse LL\n7.Insert by position\n8.Delete by position\n9.Get head\n10.Get tail\n11.Exit:\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert at tail
			scanf("%d",&val);
			NN = (NODE *)malloc(sizeof(NODE));
			NN->data = val;
			NN->next = NULL;
			insert_at_tail(NN);
		}
		else if(ch==2)
		{
			//delete at tail
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
		else if(ch==3)
		{ 
		    //display
			display();
		}
		else if(ch==4)
		{
		    //insert at head
			scanf("%d",&val);
			NN = (NODE *)malloc(sizeof(NODE));
			NN->data = val;
			NN->next = NULL;
			insert_at_head(NN);	
		}
		else if(ch==5)
		{
			//delete at head
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
		else if(ch==6)
		{
	        //Reverse
			reverseLL();	
		}
		else if(ch==7)
		{
			//Insert by position
			scanf("%d",&val);
			scanf("%d",&pos);
			NN = (NODE *)malloc(sizeof(NODE));
			NN->data = val;
			NN->next = NULL;
			insert_by_position(NN,pos);
		}
		else if(ch==8)
		{
			//Delete by position
			scanf("%d",&pos);
			res = delet_by_position();
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
		else if(ch==9)
		{
			//Get head
			printf("%d\n",head);
		}
		else if(ch==10)
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
void insert_at_tail(NODE *NN)
{
	if(head==NULL&&tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		tail->next = NN;
		tail = NN;
	}
}
NODE *delet_at_tail()
{
	if(head==NULL && tail == NULL)
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
		temp=head;
		while(temp->next->next)
		{
			temp=temp->next;
		}
		res=tail;
		temp->next = NULL;
		tail = temp;
		return res;
	}
}
void display()
{
	if(head==NULL && tail==NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
		temp = head;
		while(temp)
		{
			printf("%d %d %d \n",temp,temp->data,temp->next);
			temp=temp->next;
		}
		printf("\n");
	}
}
void insert_at_head(NODE *NN)
{
	if(head==NULL && tail==NULL)
	{
		head=NN;
		tail=NN;
	}
	else
	{
		NN->next = head;
		head = NN;
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
		temp = head;
		head = head->next;
		temp->next = NULL;
		return temp;
	}
}
void reverseLL()
{
	NODE *prev = NULL,*next=NULL,*cur;
	if(head==NULL&&tail==NULL)
	{
		printf("No nodes\n");
	}
	else if(head==tail)
	{
		printf("No need since list contains single element\n");
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
void insert_by_position(NODE *NN,int pos)
{
	int p,flag=0;
	temp=head;
	p=1;
	while(p<pos-1)
	{
	    if(temp==NULL)
		{
			printf("Insertion is not possible");
			flag=1;
			break;
		}
		temp=temp->next;
		p++;
	}
	if(flag==0)
	{
		NN->next = temp->next;
	    temp->next = NN;
	}	
}
NODE *delet_by_position()
{
	int p,flag=0;
	if(head==NULL&&tail==NULL)
	{
		return NULL;
	}
	else
	{
		temp = head;
		p = 1;
		while(p<pos-1)
		{
			if(temp==NULL)
			{
				return NULL;
			}
			temp=temp->next;
			p++;
		}
		res = temp->next;
		temp->next=temp->next->next;
		res->next = NULL;
		return res;
	}
}