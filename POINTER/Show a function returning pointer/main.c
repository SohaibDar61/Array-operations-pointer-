
/**

Write a program in C to show how a function returning pointer


*/


#if 0

#include <stdio.h>
int* findLarger(int*, int*);
void main()
{
    int numa=0;
    int numb=0;
    int *result;
    printf("\n\n Pointer : Show a function returning pointer :\n");
    printf("--------------------------------------------------\n");
    printf(" Input the first number : ");
    scanf("%d", &numa);
    printf(" Input the second  number : ");
    scanf("%d", &numb);

    result=findLarger(&numa, &numb);
    printf(" The number %d is larger.  \n\n",*result);
}

int* findLarger(int *n1, int *n2)
{
    if(*n1 > *n2)
        return n1;
    else
        return n2;
}


#endif
//##################################################

/**

Write a program in C to compute the sum of all elements in
an array using pointers


*/




#include <stdio.h>

int SUM(int *pt , int n);

void main()
{
    int arr1[10];
    int i,n ,sum;
    printf("\n\n Pointer : Sum of all elements in an array :\n");
    printf("------------------------------------------------\n");

    printf(" Input the number of elements to store in the array (max 10) : ");
    scanf("%d",&n);

    printf(" Input %d number of elements in the array : \n",n);
    for(i=0; i<n; i++)
    {
        printf(" element - %d : ",i+1);
        scanf("%d",&arr1[i]);
    }
    sum = SUM(arr1,n);
    printf(" The sum of array is : %d\n\n", sum);
}



int SUM(int *pt , int n)
{
    int i ,sum =0;
    // pt store the base address of array arr1

    for (i = 0; i < n; i++)
    {
        sum = sum + *(pt +i);

    }
    return sum;
}
