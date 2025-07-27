//Initializing a structure
#include<stdio.h>
struct student
{
	char name[20];
	char rno[20];
	int age;
	float cgpa;
}s2,s3;
int main()
{
	struct student s1={"LAHARIKA","05J9",18,9.3};//one way of initialization
	printf("  Name\t-\tRollNo\t-\tAge\t-\tCGPA\n");
	printf("%s\t%s\t\t%d\t\t%.2f\n",s1.name,s1.rno,s1.age,s1.cgpa);
	scanf("%s\t%s\t%d\t%f\n",s2.name,s2.rno,&s2.age,&s2.cgpa);
	printf("%s\t%s\t\t%d\t\t%.2f\n",s2.name,s2.rno,s2.age,s2.cgpa);
	scanf("%s\t%s\t%d\t%f\n",s3.name,s3.rno,&s3.age,&s3.cgpa);
	printf("%s\t%s\t\t%d\t\t%.2f\n",s3.name,s3.rno,s3.age,s3.cgpa);
}