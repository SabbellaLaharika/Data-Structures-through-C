#include<stdio.h>
typedef struct student
{
	char name[20];
	char rno[20];
	int age;
	float cgpa;
}stud;
int main()
{
	stud s1={"LAHARIKA","05J9",18,9.5};
	printf("%s\t%s\t%d\t%.2f\n",s1.name,s1.rno,s1.age,s1.cgpa);
}