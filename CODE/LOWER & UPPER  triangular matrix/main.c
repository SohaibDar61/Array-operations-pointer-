/**

Write a program in C to print or display the lower triangular
of a given matrix.


Write a program in C to print or display upper triangular matrix.

*/


#include <stdio.h>

int main()
{
    int arr1[10][10],i,j,n;
    //float determinant=0;

    printf("\n\nDisplay the lower triangular of a given matrix :\n");
    printf("----------------------------------------------------\n");


    printf("Input the size of the square matrix : ");
    scanf("%d", &n);
    printf("Input elements in the first matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("element - [%d],[%d] : ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n ; j++)
        {
            printf("% 4d",arr1[i][j]);
        }
        printf("\n");
    }

    printf("The matrix is :\n");
    for(i=0; i<n; i++)
    {
        printf("\n");
        for(j=0; j<n ; j++)
        {
     // i can change the condition whatever i want
     // if i want print upper triangular ,i should change the condition
     // to if( i >= j)
            if(i<=j)
                printf("% 4d",arr1[i][j]);
            else
                printf("% 4d",0);
        }
        printf("\n");
    }

}
