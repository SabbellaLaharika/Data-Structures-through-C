#include<stdio.h>
struct student
{
	int roll;
	char name[30];
	int age;
	float cgpa;
};
typedef struct student stud;
void printStructure(stud *s)
{
	printf("%d %s %d %.2f",s -> roll,s ->name, s -> age, s -> cgpa);
}
int main()
{
	stud s;
	stud *s_ptr;
	s_ptr = &s;
	scanf("%d", &s_ptr -> roll);
	scanf("%s", s_ptr -> name);
	scanf("%d", &s_ptr -> age);
	scanf("%f", &s_ptr -> cgpa);
	printStructure(s_ptr); 
}
