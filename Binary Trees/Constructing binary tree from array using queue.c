#include<stdio.h>
#include<stdlib.h>
struct Node {
	struct Node *left;
	int data;
	struct Node *right;
};
typedef struct Node NODE;
NODE *queue[100],*NN,*Root;
NODE *Newnode(int val);
NODE *constructtree(int *arr,int n);
void inorder(NODE *Root);
int main()
{
	int arr[100],n,i;
	scanf("%d",&n);
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	Root = constructtree(arr,n);
	inorder(Root);
}
NODE *Newnode(int val)
{
	NN = (NODE *)malloc(sizeof(NODE));
	NN->data = val;
	NN->left = NULL;
	NN->right = NULL;
	return NN;
}
NODE *constructtree(int *arr,int n)
{
	int i = 0,front = 0,rear = 0;
	NN = Newnode(arr[0]);
	queue[rear] = NN;
	while(1)
	{
		if(2*i+1 > n)
		{
			return queue[0];
		}
		if(arr[2*i+1!=0])
		{
			// Left child
			NN = Newnode(arr[2*i+1]);
			queue[++rear] = NN;
			queue[front]->left = NN;
		}
		if(2*i+2 < n && arr[2*i+2!=0])
		{
			// Right child
			NN = Newnode(arr[2*i+2]);
			queue[++rear] = NN;
			queue[front]->right = NN;
		}
		front++;
		i++;
	}
}
void inorder(NODE *Root)
{
	if(Root)
	{
		inorder(Root->left);
		printf("%d ",Root->data);
		inorder(Root->right);
	}
}