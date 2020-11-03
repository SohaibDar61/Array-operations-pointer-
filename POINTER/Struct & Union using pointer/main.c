
/**
Write a program in C to show the usage of pointer to structure.

#############################################################

Write a program in C to show a pointer to union.
*/




#include <stdio.h>
struct EmpAddress
{
char *ename;
char stname[20];
int pincode;
}
employee={"John Alter","Court Street \n",654134},*pt=&employee;

int main()
{
 	printf("\n\n Pointer : Show the usage of pointer to structure :\n");
	printf("--------------------------------------------------------\n");
	printf(" %s from %s \n\n",pt->ename,(*pt).stname);
	return 0;
}


//#######################################################
#include <stdio.h>
union empAdd
{
char *ename;
char stname[20];
int pincode;
};

int main()
{
 	printf("\n\n Pointer : Show a pointer to union :\n");
	printf("----------------------------------------\n");
    union empAdd employee,*pt;
    employee.ename="Jhon Mc\0Donald";//assign  the string up to null character i.e. '\0'

    pt=&employee;

    printf(" %s %s\n\n",pt->ename,(*pt).ename);

    return 0;
}
