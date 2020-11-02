/**
 * C program to print one unique element only ,not all in array
 */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE],result =0;
    int size, i;

    /* Input size of array and elements in array */
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        result ^= arr[i];
    }
    printf("%d",result);

    return 0;
}
