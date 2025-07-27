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
	stud s;
	stud *s_ptr;
	s_ptr = &s;
	scanf("%d", &s_ptr -> roll);
	scanf("%s", s_ptr -> name);
	scanf("%d", &s_ptr -> age);
	scanf("%f", &s_ptr -> cgpa);
	printf("%d %s %d %.2f",s_ptr -> roll,s_ptr ->name, s_ptr -> age, s_ptr -> cgpa);
}