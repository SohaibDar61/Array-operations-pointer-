

#include <stdio.h>

#define MAX_SIZE 100

void Ensert_Element(int *array,int size);

int main()
{
    int arr[MAX_SIZE];
    int i, size;

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    Ensert_Element(arr,size);
}


void Ensert_Element(int *array,int size)
{
    int  pos,num,i,j;

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            /*
             * Swap if currently selected array element
             * is not at its correct position.
             */
            if(array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    /* Print array after insert operation */
    printf("Array elements after insertion : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", array[i]);
    }

    /* Input new element and position to insert */
    printf("\nEnter element to insert : ");
    scanf("%d", &num);
    printf("\nEnter the element position : ");
    scanf("%d", &pos);

    /* If position of element is not valid */
    if(pos > size+1 || pos < 0)
    {
        printf("Invalid position! Please enter position between 1 to %d \n", size);
    }
    else
    {
        for(i = size; i >= pos ; i--)
        {
            array[i] = array[i-1] ;
        }
        /* Insert new element at given position and increment size */
        array[pos] = num;
        size++;
        /* Print array after insert operation */
        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", array[i]);
        }
    }
}
