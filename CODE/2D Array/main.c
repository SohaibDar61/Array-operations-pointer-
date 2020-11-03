/**
Write a C program Fills a 2D-array then gets
the largest number ,then prints it
and gets the smallest number then prints it



C program = functions
function = prototype + call + body
function = call + prototype +  body

functions ??
body ??

*/




#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
void fill(int arr[][COLS] ,int ROWS);
int get_MAX(int arr[][COLS] ,int ROWS);
int get_MIN(int arr[][COLS] ,int ROWS);

int main()
{
    int min = 0;
    int max = 0;

    int arr[ROWS][COLS];

    fill(arr,ROWS);
    max = get_MAX(arr,ROWS);
    printf("MAX = %d \n",max);

    min = get_MIN(arr,ROWS);
    printf("MIN = %d\n",min);

    return 0;
}




void fill(int arr[][COLS] ,int ROWS)
{
 int i ,j;
 for(i=0;i<ROWS;i++)
 {
     for(j=0;j<COLS;j++)
     {
       printf("Element [%d][%d] =  \n",i,j);
       scanf("%d",&arr[i][j]);
     }
 }

}
int get_MAX(int arr[][COLS] ,int ROWS);

{
    int i,j;
    int ret = arr[0][0];
 for(i=0;i<ROWS;i++)
 {
     for(j=0;j<COLS;j++)
     {
         if(arr[i][j]> ret)
            ret= arr[i][j];
     }
 }
 return ret;
}

int get_MIN(int arr[][COLS] ,int ROWS)
{
    int i,j;
    int ret = arr[0][0];
 for(i=0;i<ROWS;i++)
 {
     for(j=0;j<COLS;j++)
     {
         if(arr[i][j]< ret)
            ret= arr[i][j];
     }
 }
 return ret;
}
