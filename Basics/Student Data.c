#include<stdio.h>
struct Student
{
	int rollno;
	char name[20];
	double per;
};
int main()
{
	struct Student s1,s2,s3;
	scanf("%d\t%s\t%f",&s1.rollno,s1.name,&s1.per);
	scanf("%d\t%s\t%f",&s2.rollno,s2.name,&s2.per);
	scanf("%d\t%s\t%f",&s3.rollno,s3.name,&s3.per);
	printf("Student details:- ");
	printf("%d\t%s\t%lf",s1.rollno,s1.name,s1.per);
	printf("%d\t%s\t%lf",s2.rollno,s2.name,s2.per);
	printf("%d\t%s\t%lf",s3.rollno,s3.name,s3.per);
}