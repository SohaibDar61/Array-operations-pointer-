/**

complexity :O(log n)

Advantages:
**Much faster in comparison to the linear search.

Disadvantages:
**Complicated than the linear search
**Works only for lists that are sorted and kept sorted
*/


#include <stdio.h>
#include <stdlib.h>
#define MAX_size 30

int main()
{
    int i,size,top,bottom,mid,index=-1,number;
    int array[MAX_size];
    char flag = 0;;
    //size of array
    printf("Enter Size of Array : ");
    scanf("%d",&size);

    //ُElements of array
    for(i=0; i<size; i++)
    {
        printf("Element [%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("Enter the number : ");
    scanf("%d",&number);

    top=0;
    bottom =size-1;
    while(top <= bottom &&(flag == 0))
    {
        mid = (top + bottom) / 2;
        if(array[mid] == number)
        {
            index =mid;
            flag = 1;
        }
        else  if(array[mid] > number)
        {
            bottom = mid - 1;
        }
        else
        {
            top = mid + 1;
        }
    }
    if(top > bottom)
        printf("Number not found !\n");
    else
        printf("the index of the number = %d",index);

}






// #######################################################

#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("The element is not present"
                            " in array")
                   : printf("The element is present at "
                            "index %d",
                            result);
    return 0;
}

