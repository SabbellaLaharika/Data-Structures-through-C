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
	stud *s[n];
	{
		printf("Enter details of student %d : ",i+1);
		printf("\nRoll.No :- ");
		scanf("%d",s->roll);
		printf("Name :- ");
		scanf("%s",s->name);
		printf("Age :- ");
		scanf("%d",s->age);
		printf("CGPA :- ");
		scanf("%f",s->cgpa);
	}
	printf("Student data:- ");
	for(i=0;i<n;i++)
	{
		printf("\nRoll.No :- %d\nName :- %s\nAge :- %d\nCGPA :- %0.2f",s->roll,s->name,s->age,s->cgpa);
	}
}