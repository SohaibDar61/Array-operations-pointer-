
/**

Write a program in C to find the factorial
of a given number using pointers.

*/




#include <stdio.h>
void FIND_FACT(int num ,int *Fact);


int main()
{
    //int arr1[10][10],i,j,n;
    int fact;
    int num;



    printf("\n\nCalculate the factorial of the number :\n");
    printf("-------------------------------------------------\n");

    printf("Input the number :");
    scanf("%d",&num);
    FIND_FACT(num,&fact);
    printf("The Factorial number is : %d\n",fact);
}


void FIND_FACT(int num ,int *Fact)
{
    int i;
    *Fact =1;

    for(i = num; i > 1; i--)
    {
        *Fact *= i;
    }
}
