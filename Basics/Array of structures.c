#include<stdio.h>
struct student
{
	char name[20];
	char rno[20];
	int age;
	float cgpa;
};
int main()
{
	int n,i;
	printf("How many students ?\n");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter Student %d details: \n",i+1);
		printf("Name : ");
		scanf("%s",s[i].name);
		printf("RollNo : ");
		scanf("%s",s[i].rno);
		printf("Age : ");
		scanf("%d",&s[i].age);
		printf("CGPA : ");
		scanf("%f",&s[i].cgpa);
	}
	printf("Name\tRollNo\t\tAge\t\tCGPA\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t\t%d\t\t%.2f\n",s[i].name,s[i].rno,s[i].age,s[i].cgpa);
	}
}