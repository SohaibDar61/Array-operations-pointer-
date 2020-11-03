/*

Program :     bubble_sort
AUTHOR :      Eng.SOHAIB REDA DAR



DATE :13 / 4 / 2020
DESCRIPTION
sort Elements of Array using Counting sort
*/



#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void sort_array(int *ptr_arr,int arr_length);

int main()
{
    int array[SIZE];
    int i;
    //Data before sorting
    printf("===============Data before sorting================\n\n");
    for(i=0; i<SIZE; i++)
    {
        printf("Value [%d] = ",i);
        scanf("%d",&array[i]);
    }

    //algorithm for sorting data using bubble sort
    sort_array(array,SIZE);
    printf("===============Data after sorting================\n\n");
    for(i=0; i<SIZE; i++)
        printf("\nThe Element [%d] = %d ",i,array[i]);
    return 0;
}

void sort_array(int *ptr_arr,int arr_length)
{
    int count[3]={0};
    int i,j;
    for(i=0; i< arr_length ; i++)
    {
        count[ptr_arr[i]]++;
    }
    for(i=0; i<3; i++)
    {
        while(count[i])
        {
            ptr_arr[j] = i;
            j++;
            count[i]--;
        }
    }
}



