#include<stdio.h>
struct student
{
	int rno;
	char name[10];
	float per;
};
int main( )
{
	struct student s;
	int size;
	printf("student details are: ");
	printf("enter roll no, name, percentage");
	scanf("%d %s %f",&s.rno,&s.name,&s.per);
	printf("\n %d %s %f",s.rno,s.name,s.per);
	printf("size of struct student: %zu bytes \n",sizeof (struct student));
	return 0;
}
