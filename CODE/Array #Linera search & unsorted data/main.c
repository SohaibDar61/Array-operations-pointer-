

/**


complexity : o(n)

*/


#include <stdio.h>
#include <stdlib.h>

#define MAX 30

int main()
{
    int Size, i, a[MAX] = {0}, index, number, flag = 0;
    //Size of Array
    printf("Please Enter Size of Array : ");
    scanf("%d",&Size);
    // The Elements  of the array
    for ( i = 0 ; i < Size ; i++)
    {
        printf("Please Enter The Element Number %d of the array: ",i);
        scanf("%d",&a[i]);
    }

    printf("Please enter the number to get it's index: ");
    scanf("%d",&number);

    for(i = 0 ; i < Size &&(flag==0) ; i++)
    {
        if(a[i] == number)
        {
            index = i;
            flag = 1;

        }
    }

    if( flag == 1)
        printf("Number found and it's index is: %d\n ",index);
    else
        printf("Number not found !\n");
}





int search_for_data(int *ptr_a,int size,int data)
{
    int i,index = -1,flag = 0;
    for(i = 0 ; i < size &&(flag==0) ; i++)
    {
        if(ptr_a[i] == data )
        {
            index = i;
            flag = 1;
        }
    }
    if( flag == 1)
        return index;
}
