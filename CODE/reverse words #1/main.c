
/**

write C function to reverse words in sentence
[without using external arrays]

*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_array_of_character(char *arr, int size)
{
    int i;
    for(i=0; i<size/2; i++)
    {
        char temp;
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

void reverse_words_in_array(char *arr)
{
    int i,size_s = 0,size_w =-1, size = strlen(arr);
    reverse_array_of_character(arr,size);
    printf("\n%s\n",arr);
    for(i=0; arr[i]; i++)
    {
        if(arr[i] == ' ' || i == size)
        {
            size_w = i - size_s;
           /* i as as an end index of word
            size_s as a first index of word
            so ,to result the size of word to revrser it
            ,we must subtract>> i - size_s  */
            reverse_array_of_character((arr + size_s),size_w);
             size_s = i + 1 ;
        }
    }
    printf("%s\n",arr);
}




int main()
{
    char str[] = "I work as an embedded software engineer for 3 years";
    reverse_words_in_array(str);
}
