

/**
  >>>>>   Fifth root of a number  <<<<<<<<

Given a number, print floor of 5’th root of the number.

Method 1 (Simple)
A simple solution is initialize result as 0,
keep incrementing result while result5 is smaller than or equal
to n. Finally return result – 1.

>>
Time complexity of above solution is O(n1/5).
We can do better. See below solution.

*/

#include <stdio.h>

// Returns floor of 5th root of n
int floorRoot5(int n)
{
    // Base cases
    if (n == 0 || n == 1)
        return n;

    // Initialize result
    int res = 0;

    // Keep incrementing res while res^5 is
    // smaller than or equal to n
    while (res*res*res*res*res <= n)
        res++;

    // Return floor of 5'th root
    return res-1;
}



/**
Method 2 (Binary Search)
The idea is to do Binary Search.
We start from n/2 and if its 5’th power is more than n,
we recur for interval from n/2+1 to n. Else if power is less,
we recur for interval 0 to n/2-1

>>Time complexity of above solution is O(Log n)

*/


// Returns floor of 5'th root of n
int floorRoot5(int n)
{
    // Base cases
    if (n == 0 || n == 1)
        return n;

    // Do Binary Search for floor of 5th square root
    int low = 1, high = n, ans = 0;
    while (low <= high)
    {
        // Find the middle point and its power 5
        int mid = (low + high) / 2;
        long int mid5 = mid*mid*mid*mid*mid;

        // If mid is the required root
        if (mid5 == n)
            return mid;

        // Since we need floor, we update answer when
        // mid5 is smaller than n, and move closer to
        // 5'th root
        if (mid5 < n)
        {
            low = mid + 1;
            ans = mid;
        }
        else // If mid^5 is greater than n
            high = mid - 1;
    }
    return ans;
}

// Driver program
int main()
{
    int n = 250;
    printf("Floor of 5'th root is %d",floorRoot5(n));
    return 0;
}
