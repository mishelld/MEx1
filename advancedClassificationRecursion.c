#include <stdio.h>
#include "NumClass.h"

//Auxiliary function
int pali(int n, int t)
{
    if (n == 0)
        return t;
    t = (t * 10) + (n % 10);
 
    return pali(n / 10, t);
}

//isPalindrome recursive
int isPalindrome(int n)
{
 int t = pali(n, 0);
  if (t == n){
      return 1;
  }
  return 0;

}

//A function that makes a power calculation
int Pow(int x, int n){
    int r = 1;
    while (n > 0){
        r *= x;
        n--;
    }
return r;
}


//Auxiliary function that calculates the sum of all digits
int Rec(int num, int dig){
    int sum = 0;
    int n = num;
    if(n > 0){
        sum += Pow((n%10),dig);
        n/=10;
        sum += Rec(n,dig);
    }
    return sum;
}



//isArmstrong recursive
int isArmstrong(int num){
    if(num < 0 ){ //if num is negative
        return 0;
    }
    if(num == 0){ // if num is 0
        return 1;
    }
    int ans = 0;
    int sum = 0 ;
    int count = 0;
    int n = num;
    while(n > 0){ //A loop that counts the number of characters in the number
        n/=10;
        count++;
    }
    if(count == 1){// if num between 0-9
        return 1;
    }
    sum += Rec(num,count);//Recursive call
    if(sum == num){
        ans = 1;
    }
    else{
        ans = 0;
    }
    return ans;
}
