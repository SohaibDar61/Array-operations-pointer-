
/**
              >>>>>>>>> Pointers to void in C  <<<<<<<<<<<<<
In the c programming language, pointer to void is the concept of defining a pointer variable that is independent of data type. In C programming language, a void pointer is a pointer variable used to store the address of a variable of any datatype. That means single void pointer can be used to store the address of integer variable, float variable, character variable, double variable or any structure variable. We use the keyword "void" to create void pointer. We use the following syntax for creating a pointer to void…

void *pointerName ;


void *ptr ;
Here, "ptr" is a void pointer variable which is used to store the address of any datatype variable.

MOST IMPORTANT POINTS TO BE REMEMBERED

void pointer stores the address of any datatype variable.
Example Program

*/


#include<stdio.h>
#include<conio.h>

int main()
{
   int a ;
   float b ;
   char c ;

   void *ptr ;


   ptr = &a ;
   printf("Address of 'a' = %u\n ", ptr) ;

   ptr = &b ;
   printf("Address of 'b' = %u\n" ,ptr);

   ptr = &c ;
   printf("Address of 'c' = %u\n", ptr);

   return 0;
}
