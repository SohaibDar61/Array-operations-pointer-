#include "stdio.h"
#include "string.h"
#define MAX_NAME_SIZE 50


void sort(char values[][MAX_NAME_SIZE], int n)
{
    int i, j;
    char temp[MAX_NAME_SIZE];
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(stricmp(values[j], values[i])<0)
            {
                strcpy(temp, values[i]);
                strcpy(values[i], values[j]);
                strcpy(values[j], temp);
            }
        }
    }
}


int main()
{
    char names[5][MAX_NAME_SIZE] = {"Ahmed Alaa",
                                    "Ahmed Osama", "Ahmed Mamdouh",
                                    "Ahmed Samy", "Ahmed Hossain"
                                   };
    int i;
    sort(names, 5);
//printing the sorted array
    for(i=0; i<5; i++)
        printf("%s\r\n", names[i]);
}
