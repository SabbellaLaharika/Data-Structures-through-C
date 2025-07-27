#include<stdio.h>
#include<stdlib.h>
struct NodeLL {
	int data;
	struct NodeLL *next;
};
typedef struct NodeLL NODELL;
NODELL *head = NULL, *temp, *NNLL;
NODELL *NewnodeLL(int val);
void createLL(int val);
//void displayLL();
struct Nodet{
	struct Nodet *left;
	int data;
	struct Nodet *right;
};
typedef struct Nodet NODETREE;
NODETREE *Root = NULL,*NNT,*queue[100];
NODETREE * NewnodeTree(int val);
NODETREE * constructtree(NODELL *head);
void inorder(NODETREE *Root);
void preorder(NODETREE *Root);
void postorder(NODETREE *Root);
int main()
{
	int val,n,i;
	scanf("%d",&n);
	for ( i = 1; i <= n; i++ )
	{
		scanf("%d",&val);
		createLL(val);
	}
//	displayLL();
	Root = constructtree(head);
	inorder(Root);
	printf("\n");
	preorder(Root);
	printf("\n");
	postorder(Root);
	printf("\n");
} 
NODELL *NewnodeLL(int val)
{
	NNLL = (NODELL *)malloc(sizeof(NODELL));
	NNLL->data = val;
	NNLL->next = NULL;
	return NNLL;
}
void createLL(int val)
{
	NNLL = NewnodeLL(val);
	if(head == NULL)
	{
		head = NNLL;
	}
	else
	{
		temp = head;
		while(temp->next)
		{
			temp = temp->next;
		}
		temp->next = NNLL;
	}
}
//void displayLL()
//{
//	temp = head;
//	while(temp->next)
//	{
//		printf("%d %d %d\n",temp,temp->data,temp->next);
//		temp = temp->next;
//	}
//	printf("%d %d %d\n",temp,temp->data,temp->next);
//}
NODETREE * NewnodeTree(int val)
{
	NNT = (NODETREE *)malloc(sizeof(NODETREE));
	NNT->data = val;
	NNT->right = NULL;
	NNT->left = NULL;
	return NNT;
}
NODETREE * constructtree(NODELL *head)
{
	int front = 0, rear = 0;
	temp = head;
	NNT = NewnodeTree(temp->data);
	queue[rear] = NNT;
	while(1)
	{
		if(temp->next)
		{
			NNT = NewnodeTree(temp->next->data);
			queue[++rear] = NNT;
			queue[front]->left = NNT;
			temp = temp->next;
		}
		else
		{
			return queue[0];
		}
		if(temp->next)
		{
			NNT = NewnodeTree(temp->next->data);
			queue[++rear] = NNT;
			queue[front]->right = NNT;
			temp = temp->next;
		}
		else
		{
			return queue[0];
		}
		front++;
	}
	
}
void inorder(NODETREE *Root)
{
	if(Root)
	{
		inorder(Root->left);
		printf("%d ",Root->data);
		inorder(Root->right);
	}
}
void preorder(NODETREE *Root)
{
	if(Root)
	{
		printf("%d ",Root->data);
		preorder(Root->left);
		preorder(Root->right);
	}
}
void postorder(NODETREE *Root)
{
	if(Root)
	{
		postorder(Root->left);
		postorder(Root->right);
		printf("%d ",Root->data);
	}
}