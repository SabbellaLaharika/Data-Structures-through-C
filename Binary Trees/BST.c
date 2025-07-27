#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *left;
	int data;
	struct Node *right;
};
typedef struct Node node;
node *root=NULL,*temp,*nn,*par;

node *newnode(int val)
{
	nn=(node *)malloc(sizeof(node));
	nn->data=val;
	nn->left=NULL;
	nn->right=NULL;
}

void insert(int val)
{
nn=newnode(val);
temp=root;
if (root==NULL)
{
root=nn;
return;	
}	
while(1)
{
	if (temp->data==nn->data)
	{
		printf("Element already in tree\n");
	 break;
	}
	else if(temp->data>nn->data)
	{
		if(temp->left!=NULL)
		{
			temp=temp->left;
		}
		else
		{
		temp->left=nn;
		return;	
		}
	}
	else if(temp->data<nn->data)
	{
		if(temp->right!=NULL)
		{
			temp=temp->right;
		}
		else
		{
			temp->right=nn;
			return;
		}
	}
}
}

int search(int key)
{
	temp=root;
	while(1)
	{
		if (temp->data==key)
		{
			return 1; 
		}
		else if(temp->data>key)
		{
			temp=temp->left;
		}
		else if (temp->data<key)
		{
			temp=temp->right;
		}
		if (temp==NULL)
		{
			return 0;
		}
	}
}


void inorder(node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}

void preorder(node *root)
{
	if(root!=NULL)
	{
		
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}


int main()
{
	int ch,val,key;
	while(1)
	{
		printf("1.insert 2.delete 3.search 4.inorder 5.preorder 6.postorder 7.levelorder 8.exit: ");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert
			scanf("%d",&val);
			insert(val);
		}
		else if(ch==2)
		{
			//delete
		}
		else if(ch==3)
		{
			//insert
			scanf("%d",&key);
			if(search(key))
			printf("Element found\n");
			else
			printf("Element not found\n");
		}
		else if(ch==4)
		{
			//inorder
			inorder(root);
		}
		else if (ch==5)
		{
			//preorder
			preorder(root);
		}
		else if(ch==6)
		{
			//postorder
			postorder(root);
		}
		else if(ch==7)
		{
			//levelorder
		}
		else
		{
			break;
		}
	}
}