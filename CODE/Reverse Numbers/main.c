#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{ int source[MAX_SIZE], dest[MAX_SIZE];
    int i, size;
    int j = 5;

    // Input size of the array
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of source array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &source[i]);
    }

    for(i=0; i<size; i++)
    {
        dest[i] = source[size -1-i];
          //dest[--j] = source[i];
    }

    /*
     * Print all elements of source array
     */
    printf("\nElements of source array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", source[i]);
    }

    /*
     * Print all elements of dest array
     */
    printf("\nElements of dest array are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", dest[i]);
    }

    return 0;
}

