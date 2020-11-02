#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
void Separate_Numbers(int *arr,int n);

int main()
{
    int i=0,n;
    int arr[SIZE];
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);

    printf("Input %d elements in the array :\n",n);
    for(i=0; i<n; i++)
    {
        printf("element - %d : ",i);
        scanf("%d",&arr[i]);
    }
    Separate_Numbers(arr,n);
    return 0;
}


void Separate_Numbers(int *arr,int n)
{
    int j=0,i=0,z=0;
    int arr_Odd[SIZE];
    int arr_Even[SIZE];

    for (i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            arr_Even[j] = arr[i];
            j++;
        }
        else
        {
            arr_Odd[z] = arr[i];
            z++;
        }
    }
    printf("the Even numbers :\r\n");
    for (i=0; i<j; i++)
    {
        printf("%d ",arr_Even[i]);
    }

    printf("\n\rthe Odd numbers :\r\n");
    for (i=0; i<z; i++)
    {
        printf("%d ",arr_Odd[i]);
    }
    printf("\n\n");

}
