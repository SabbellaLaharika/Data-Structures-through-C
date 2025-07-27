#include<stdio.h>
int per_oper(int op1,char ch,int op2);
int isoper(char ch);
int post_eval(char *post);
int main()
{
	char postfix[20];
	scanf("%[^\n]s",&postfix);
	int res;
	res = post_eval(postfix);
	printf("%d",res);
}
int per_oper(int op1,char ch,int op2)
{
	switch(ch)
	{
		case '^' : return op2 ^ op1;
		case '*' : return op2 * op1;
		case '/' : return op2 / op1;
		case '+' : return op2 + op1;
		case '-' : return op2 - op1;
	}
}
int isoper(char ch)
{
	switch(ch)
	{
		case '^' :
		case '*' :
		case '/' :
		case '+' :
		case '-' :
			return 1;
		default :
			return 0;
	}
}
int post_eval(char *post)
{
	int i,st[100],top = -1,val = 0,res,op1,op2;
	for(i=0;post[i]!='0';i++)
	{
		if(isoper(post[i]))
		{
			op1 = st[top--];
			op2 = st[top--];
			res = per_oper(op1,post[i],op2);
			st[++top] = res;
		}
		else 
		{
			if(post[i] >= 48 && post[i] <= 57 )
			{
				val = val*10 + post[i] - '0';
			}
			else if(post[i] == ' ' && val != 0)
			{
				st[++top] = val;
				val = 0;
			}
		}
	}
	return st[0];
}