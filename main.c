#include <stdio.h>
#include "NumClass.h"

int main()
{ //we will use for loop and the functions from the other classes to print all the numbers that 
    //to print the answers 
    int start, end;
    //we scan to get input
    scanf("%d %d", &start, &end);
    //we print the armstrong numbers
    printf("The Armstrong numbers are:");
    int k = start;
    while(k <= end)
    {
        if (isArmstrong(k))
        {
            printf(" %d", k);
        }
        k++;
    }
    //we print palindroms numbers
    printf("\nThe Palindromes are:");
    int l = start;
    while(l <= end)
    {
        if (isPalindrome(l))
        {
            printf(" %d", l);
        }
         l++;
    }
    //we print prime numbers
    printf("\nThe Prime numbers are:");
      int w = start;
    while(w <= end)
    {
        if (isPrime(w))
        {
            printf(" %d", w);
        }
         w++;
    }
    //we print strong numbers
    printf("\nThe Strong numbers are:");
     int p = start;
    while(p <= end)
    {
        if (isStrong(p))
        {
            printf(" %d", p);
        }
         p++;
    }
    printf("\n");
    return 0;
}
