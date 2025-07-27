#include<stdio.h>
typedef struct student
{
	char name[20];
	int mark1;
	int mark2;
	int mark3;
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
		printf("Subject1: ");
		scanf("%d",&s[i].mark1);
		printf("Subject2: ");
		scanf("%d",&s[i].mark2);
		printf("Subject3: ");
		scanf("%d",&s[i].mark3);
		printf("Age: ");
		scanf("%d",&s[i].age);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the student %d details\n",i+1);
		printf("Name: %s\n",s[i].name);
		printf("Marks of three different subjects: ");
		printf("Subject1: %d  ",s[i].mark1);
		printf("Subject2: %d  ",s[i].mark2);
		printf("Subject3: %d ",&s[i].mark3);
		printf("\nAge: %d\n",s[i].age);
		s[i].sum = s[i].mark1+s[i].mark2+s[i].mark3;
		printf("Sum: %d\n",s[i].sum);
		s[i].per = s[i].sum/3.0;
		printf("Percentage: %0.0f\n",s[i].per);
	}
	printf("Students who got b grade are ");
	for(i=0;i<n;i++)
	{
		if(s[i].per>=70&&s[i].per<80)
		{
			printf("%s\n",s[i].name);
		}
	}
}