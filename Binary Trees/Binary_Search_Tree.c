#include<stdio.h>
#include<stdlib.h>
struct Node
{
	struct Node *left;
	int data;
	struct Node *right;
};
typedef struct Node NODE;
NODE *root = NULL,*temp,*NN,*parent,*res;
NODE *Newnode(int val)
{
	NN = (NODE *)malloc(sizeof(NODE));
	NN->left = NULL;
	NN->data = val;
	NN->right = NULL;
	return NN;
}
void insert(int val)
{
	NN = Newnode(val);
	temp = root;
	if(root == NULL)
	{
		root = NN;
		return;
	}
	while(1)
	{
		if(temp->data == NN->data) 
		{
			printf("Element is already present in the Binary Search Tree\n");
			return;
		}
		else if(temp->data > NN->data)
		{
			if(temp->left != NULL)
			{
				temp = temp->left;
			}
			else
			{
				temp->left = NN;
				return;
			}
		}
		else if(temp->data < NN->data)
		{
			if(temp->right != NULL)
			{
				temp = temp->right;
			}
			else
			{
				temp->right = NN;
				return;	
			}
		}
	}
}
NODE *delet(int key)
{
	if(root == NULL)
	{
		return NULL;
	}
	temp = root;
	parent = NULL;
	while(temp && temp->data != key)
	{
		if(temp->data > key)
		{
			parent = temp;
			temp = temp->left;
		}
		else if(temp->data < key)
		{
			parent = temp;
			temp = temp->right;
		}
	}
	if(temp == NULL)
	{
		return NULL;
	}
	if(temp->right == NULL && temp->left == NULL)
	{
		res = temp;
		if(parent->right != NULL && parent->right->data == key)
		{
			parent->right = NULL;
		}
		else if(parent->left != NULL && parent->left->data == key)
		{
			parent->left = NULL;
		}
		return res;
	}
	else if(temp->left == NULL)
	{
		// single child  right
		res = temp;
		if(parent->left != NULL && parent->left->data == key)
		{
			parent->left = temp->right;
		}
		else if(parent->right != NULL && parent->right->data == key)
		{
			parent->right = temp->right;
		}
		return res;
	}
	else if(temp->right == NULL)
	{
		// single child
		res = temp;
		if(parent->left != NULL && parent->left->data == key)
		{
			parent->left = temp->left;
		}
		else if(parent->right != NULL && parent->right->data == key)
		{
			parent->right = temp->left;
		}
		return res;
	}
	else if(temp->left != NULL && temp->right != NULL)
	{
		// Node has two children
		NODE *p,*t;
		int val;
		t = temp->right;
		p = NULL;
		while(t->left)
		{
			p = t;
			t = t->left;
		}
		if(p!=NULL)
		{
			res = t;
			val = t->data;
			t->data = temp->data;
			temp->data = val;
			p->left = t->right;
			return res;
		}
		else
		{
			res = t;
			val = t->data;
			t->data = temp->data;
			temp->data = val;
			temp->right = t->right;
			return res;
		}
	}
}
int search(int key)
{ 
    int val;
	temp = root;
	while(1)
	{
		if (temp->data == key)
		{
			return 1;
		}
		else if (temp->data > key)
		{
			temp = temp->left;
		}
		else if(temp->data < key)
		{
			temp = temp->right;
		}
		if(temp == NULL)
		{
			return 0;
		}
	}
}
void inorder(NODE *root)
{
	if(root != NULL)
	{
		
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
void preorder(NODE *root)
{
	if(root != NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(NODE *root)
{
	if(root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}
int main()
{
	int ch,val,key,n,i;
	scanf("%d",&n);
	for ( i = 0; i < n; i++ )
	{
		scanf("%d",&val);
		insert(val);
	}
	while(1)
	{
		printf("1.Insert\n2.Delete\n3.Search\n4.Inorder\n5.Preorder\n6.Postorder\n7.Levelorder\n8.Exit:\n");
		scanf("%d",&ch);
		if( ch == 1 )
		{
			//Insert
			scanf("%d",&val);
			insert(val);
		}
		else if( ch == 2 )
		{
			//Delete
			scanf("%d",&key);
			res = delet(key);
			if(res)
			{
				printf("%d",res->data);
				free(res);
			}
			else
			{
				printf("Element not found\n");
			}
			
		}
		else if( ch == 3 )
		{
			//Search
			scanf("%d",&key);
			if(search(key))
			{
				printf("Element found\n");
			}
			else
			{
				printf("Element not found\n");
			}
		}
		else if( ch == 4 )
		{
			//Inorder
			inorder(root);
		}
		else if( ch == 5 )
		{
			//Preorder
			preorder(root);
		}
		else if( ch == 6 )
		{
			//Postorder
			postorder(root);
		}
		else if( ch == 7 )
		{
			//Levelorder
		}
		else
		{
			break;
		}
	}
}