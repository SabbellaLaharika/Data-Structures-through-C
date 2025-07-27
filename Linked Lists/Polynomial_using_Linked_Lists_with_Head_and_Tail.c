//To add two polynomials
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int coef,pow;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head=NULL,*tail=NULL,*temp,*NN;
NODE * Newnode(int coef,int pow);
void insert(NODE * head,NODE * tail,NODE * NN);
void display(NODE * head);
int main()
{
	int coef,pow;
	char ch = 'a';
	while(ch!='N')
	{
		scanf("%d%d",&coef,&pow);
		NN = Newnode(coef,pow);
		insert(head,tail,NN);
		printf("Do you want to enter Y/N : ");
		scanf(" %c",&ch);
	}
	display(head);
}
NODE * Newnode(int coef,int pow)
{
	NN = (NODE *)malloc(sizeof(NODE));
	NN->coef = coef;
	NN->pow = pow;
	NN->next = NULL;
	return NN;
}
void insert(NODE * head,NODE * tail,NODE * NN)
{
	if(head==NULL&&tail==NULL)
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
void display(NODE * head)
{
	temp = head;
	if(temp == NULL)
	{
		printf("No Nodes\n");
	}
	else
	{
		while(temp)
		{
		    if(temp->next!=NULL)
			printf("%dx^%d+",temp->coef,temp->pow);
			else
			printf("%dx^%d",temp->coef,temp->pow);
		}
	}
}