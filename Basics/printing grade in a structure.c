//incomplete
#include<stdio.h>
typedef struct student
{
	char name[20];
	int marks[3];
	int age;
	int sum;
	float per;
	char grade;
}stud;
int main()
{
	int n,i,j;
	printf("How many Students? \n");
	scanf("%d",&n);
	stud s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the student %d details\n",i+1);
		printf("Name: ");
		scanf("%s",s[i].name);
		printf("Marks of three different subjects: \n");
		for(j=0;j<3;j++)
		{
			scanf("%d ",&s[i].marks);
		}
		printf("Age: ");
		scanf("%d",&s[i].age);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the student %d details\n",i+1);
		printf("Name: %s\n",s[i].name);
		printf("Marks of three different subjects: ");
		for(j=0;j<3;j++)
		{
			printf("%d ",s[i].marks);
			s[i].sum=s[i].sum + s[i].marks;
		}
		printf("\nAge: %d\n",s[i].age);
		printf("Sum: %d\n",s[i].sum);
	}
}