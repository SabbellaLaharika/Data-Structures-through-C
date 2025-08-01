#include<stdio.h>
#include<stdlib.h>
struct Node{
	int row;
	int col;
	int val;
	struct Node * next;
};
typedef struct Node NODE;
NODE *head = NULL,*tail = NULL, *temp, *NN;
NODE * Newnode(int row,int col,int val);
void insert(NODE * NN);
void display(); 
int main()
{
	int mat[100][100],r,c,i,j;
	scanf("%d%d",&r,&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(mat[i][j]!=0)
			{
				NN = Newnode(i,j,mat[i][j]);
				insert(NN);
			}
		}
	}
	display();
}
NODE * Newnode(int row,int col,int val)
{
	NN = (NODE *)malloc(sizeof(NODE));
	NN->row = row;
	NN->col = col;
	NN->val = val;
	NN->next = NULL;
	return NN;
}
void insert(NODE * NN)
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
void display()
{
	if(head==NULL)
	{
		printf("No nodes\n");
	}
	else
	{
		temp = head;
		while(temp)
		{
			printf("%d %d %d\n",temp->row,temp->col,temp->val);
			temp=temp->next;
		}
	}
}