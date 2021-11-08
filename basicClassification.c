#include <stdio.h>
#include "NumClass.h"


//we will use a for loop to check  from k=2 to x;
//if the number x%k is equal to 0
//if it is then we return false
//else we retuen true;
int isPrime(int num){
    if(num <= 0){
        return 0;
    }
    if(num == 1 || num == 2){
        return 1;
    }
    int div = num-1;
    int b = 1;
    do{
        int ans = (num % div);

        if( ans == 0){
            b = 0;
        }
        else{
            div--;
        }
    }while(b == 1 && div > 1);
return b;
}
//Auxiliary function
//to find the x factorial with recursion
int a(int x) {
if(x==1 || x==0){
    return 1;
}

  return  x*a(x-1);
}


//for every digit in the number we find its factorial and sum all of them together and if the sum equals x we return true, else we return false;
//we use while loop to do the factorial calculation 
int isStrong(int x) 
{
    int temp = x;
    int ans = 0;
    while(x>0){
        int k= x%10;
        x= x/10;
        ans = ans + a(k);
    }

if(ans==temp){
    return 1;
}
return 0;

}

