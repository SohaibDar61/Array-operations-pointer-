#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void Insertion_Sort();
void Selection_Sort();
void Bubble_Sort();
void Swap(int *a, int *b);


int main()
{
    int x;
    do
    {
        printf("Please Select Sorting Algorithm from the options below \n 1: Selection Sort \n 2: Bubble Sort\n 3: Insertion Sort\n 0: Exit\n");
        scanf("%d", &x);
        switch(x)
        {
        case 0:
            break;
        case 1:
            Selection_Sort();
            break;
        case 2:
            Bubble_Sort();
            break;
        case 3:
            Insertion_Sort();
            break;

        }
    }
    while(x != 0);

    return 0;
}


void Bubble_Sort()
{
    int Size,i,j,a[MAX] = {0};
    //int steps;

    printf("Please enter the number of elements of the array: \n");
    scanf("%d",&Size);

    for ( i = 0 ; i < Size ; i++)
    {
        printf("Please Enter Elements of array: ");
        scanf("%d",&a[i]);
    }

        // we can solve it by using do {} while(); or for (nested)
    for(i = 0; i < Size - 1; i++) // to keep track of number of cycles
    {
        for(j = 0; j < Size - i - 1; j++) // to compare the elements within the particular cycle
        {
// swap if one element is greater than its adjacent element
            if(a[j] > a[j + 1])
            {
                 Swap(&a[j], &a[j+1]);

            }
        }
    }
    /* we can solve it by using do {} while(); or for (nested)


    steps = Size-1;
    do
    {
    for(i = 0 ; i < Size-1 ; i++)
    {
        if(a[i] >= a[i+1])
            Swap(&a[i], &a[i+1]);

    }
    steps--;
    }
    while(steps >= 0); */

    printf("The Sorted Array: \n");
    for ( i = 0 ; i < Size ; i++)
    {
        printf("%d\n",a[i]);

    }
}

void Selection_Sort()
{
    int Size, i, a[MAX] = {0}, j;


    printf("Please enter the number of elements of the array: \n");
    scanf("%d",&Size);

    for ( i = 0 ; i < Size ; i++)
    {
        printf("Please Enter Elements of array: ");
        scanf("%d",&a[i]);
    }

    for(i = 0 ; i < Size  ; i++)
    {
        for(j = i+1 ; j < Size ; j++)
            if(a[i] > a[j])
                Swap(&a[i],&a[j]);

    }

    printf("The Sorted Array: \n");
    for ( i = 0 ; i < Size ; i++)
    {
        printf("%d\n",a[i]);

    }
}

void Insertion_Sort()
{
    int Size, i, a[MAX] = {0}, j;


    printf("Please enter the number of elements of the array: \n");
    scanf("%d",&Size);

    for ( i = 0 ; i < Size ; i++)
    {
        printf("Please Enter Elements of array: ");
        scanf("%d",&a[i]);
    }

    for(i = 1 ; i <= Size ; i++)
    {
        j = i-1;
        while ( j > 0 && a[j] < a[j-1])
        {
            Swap(&a[j-1], &a[j]);
            j--;
        }
    }

    printf("The Sorted Array: \n");
    for ( i = 0 ; i < Size ; i++)
    {
        printf("%d\n",a[i]);

    }



}
void Swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b ;
    *b = temp;
}

