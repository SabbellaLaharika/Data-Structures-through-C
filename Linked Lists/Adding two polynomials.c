#include<stdio.h>
#include<stdlib.h>
struct Node {
	int coef,pow;
	struct Node *next;
};
typedef struct Node NODE;
NODE *head,*head1 = NULL, *head2 = NULL, *head3 = NULL;
NODE *temp,*temp1,*temp2,*temp3,*NN;
NODE * Newnode(int coef,int pow);
NODE *createpolynomial(NODE *head);
void display(NODE *head);
NODE *addpolynimial();
int main()
{
	head1 = createpolynomial(head1); 
	head2 = createpolynomial(head2);
	head3 = addpolynomial(head1,head2,head3);
	display(head1);
	display(head2);
	display(head3);
}
NODE *createpolynomial(NODE *head)
{
	int coef,pow;
	char ch = 'Y';
	while(ch!='N')
	{
		scanf("%d%d",&coef,&pow);
		NN = Newnode(coef,pow);
		if(head==NULL)
		{
			head = NN;
		}
		else
		{
			temp = head;
			while(temp->next)
			{
				temp = temp->next;
			}
			temp->next = NN;
		}
		printf("Do you want to enter(Y/N) : ");
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
void display(NODE *head)
{
	temp = head;
	{
		while(temp)
		{
		    if(temp->next!=NULL)
			printf("%dx^%d+",temp->coef,temp->pow);
			else
			printf("%dx^%d",temp->coef,temp->pow);
			temp = temp->next;
		}
		printf("\n");
	}
}
NODE *addpolynimial()
{
	temp1 = head1;
	temp2 = head2;
	while(temp1 && temp2)
	{
		NN = Newnode(0,0);
		if(head3==NULL)
		{
			head3 = NN;
		}
		else
		{
			temp = head3;
			while(temp->next)
			{
				temp = temp->next;
			}
			temp->next = NN;
		}
	}
	if(temp1->pow == temp2->pow)
    {
	    NN->coef = temp1->coef+temp2->coef;
	    NN->pow = temp1->pow;
	    temp1 = temp1->next;
	    temp2 = temp2->next;
    }
    else if
}