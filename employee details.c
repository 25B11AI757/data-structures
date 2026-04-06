#include<stdio.h>
#include<string.h>
struct employee
{
	int IDNO;
	char name[10];
	float salary;
}e1={72801,"kavya",18.5},e2;
int main( )
{
	struct employee e3={87241,"mary",16.7},e4;
    e2.IDNO=67253;
	strcpy(e2.name,"mahi");
	e2.salary=16.8;
	printf("enter e4 IDNO")	;
	scanf("%d",&e4.IDNO);
	printf("enter e4 name");
	scanf("%s",&e4.name);
	printf("enter e4 salary");
	scanf("%f",&e4.salary);
	printf("employee details are:\n");
	printf("\n %d %s %f", e1.IDNO, e1.name, e1.salary);
	printf("\n %d %s %f", e2.IDNO, e2.name, e2.salary);
	printf("\n %d %s %f", e3.IDNO, e3.name, e3.salary);
	printf("\n %d %s %f", e4.IDNO, e4.name, e4.salary);
	return 0;
}
