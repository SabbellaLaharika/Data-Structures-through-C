#include<stdio.h>
struct student
{
	int roll;
	char name[30];
	int age;
	float cgpa;
};
typedef struct student stud;
int main()
{
	int i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	stud s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter details of student %d : ",i+1);
		printf("\nRoll.No :- ");
		scanf("%d",&s[i].roll);
		printf("Name :- ");
		scanf("%s",s[i].name);
		printf("Age :- ");
		scanf("%d",&s[i].age);
		printf("CGPA :- ");
		scanf("%f",&s[i].cgpa);
	}
	printf("Student data:- ");
	for(i=0;i<n;i++)
	{
		printf("\nRoll.No :- %d\nName :- %s\nAge :- %d\nCGPA :- %0.2f",s[i].roll,s[i].name,s[i].age,s[i].cgpa);
	}
}