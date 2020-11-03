
/**
C program using expression ++*p :

Explanation:
In the above example, two operators are involved and
both have the same precedence with a right to left associativity.
So compiler looks for associativity and the above expression ++*p
is equivalent to ++ (*p).
In another word, we can say it is pre-increment of value,
and output is >>>>> 101, 200, 101

*/


#include <stdio.h>
int main()
{
    int arr[5] = {100,200,300,400,500};
    int *p = arr;
    ++*p;
    printf("arr[0] = %d, arr[1] = %d, *p = %d", arr[0], arr[1], *p);
    return 0;
}


//##############################################

/**
C program using expression *p++ :

Explanation:
In the above example, two operators are involved and both have
different precedence. The precedence of post ++ is higher than
the *, so first post ++ will be executed and above expression,
*p++ will be equivalent to *(p++).
In another word you can say that it is post-increment of address
and output is >>>>>>  100, 200, 200.

*/



#include <stdio.h>
int main()
{
    int arr[5] = {100,200,300,400,500};
    int *p = arr;
    *p++;
    printf("arr[0] = %d, arr[1] = %d, *p = %d", arr[0], arr[1], *p);
    return 0;
}


//#########################################

/**
C program using expression *++p :

Explanation:
In the above example, two operators are involved and
both have the same precedence with the right to left associativity.
So compiler looks for associativity and the above expression *++p
is equivalent to *(++p).
In another word you can say it is pre-increment of address
and output is >>>>>>>> 100, 200,200.

*/


#include <stdio.h>
int main()
{
    int arr[5] = {100,200,300,400,500};
    int *p = arr;
    *++p;
    printf("arr[0] = %d, arr[1] = %d, *p = %d", arr[0], arr[1], *p);
    return 0;
}


