

/**

Write a program in C to count the number of vowels and consonants
in a string using a pointer.
*/




#include <stdio.h>
#include <string.h>

int main()
{
    char arr[]="string";
    char *Parr;
    Parr = arr;
    int CV = 0;
    int CC = 0;



    printf("\n\nCalculate the number of the characters :\n");
    printf("-------------------------------------------------\n");
    for(int i=0; i<strlen(arr); i++)
    {
        if(Parr[i] == 'a' || Parr[i]=='A' || Parr[i] == 'e' || Parr[i] == 'E' || Parr[i] == 'o' || Parr[i] == 'O' || Parr[i] == 'i' || Parr[i] =='I' || Parr[i] == 'u' || Parr[i] ==  'U')
        {
            CV++;
        }
        else
        {
            CC++;
        }
    }
    printf("Number of vowels is : %d\n",CV);
    printf("Number of constant is : %d\n",CC);
}
