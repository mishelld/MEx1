#include <stdio.h>
#include "NumClass.h"

//A function that makes a power calculation
int Pow(int x, int n){
    int r = 1;
    while (n > 0){
        r *= x;
        n--;
    }
return r;
}




int isArmstrong(int num){
   int s, y, n = 0;
   int ans = 0;
   s = num;
   while(s!= 0) {
       //A loop that counts the number of characters in the number
         s /= 10;
         ++n;
   }
   s = num;
   while( s != 0) {
       //a loop that calculates the sum of all digits
 	     y = s % 10;
		 ans +=  Pow(y, n);
         s /= 10;
   }
	if(ans == num){
	   return 1;
	}
	return 0;
}

      
int isPalindrome(int num){
    int a ,b = 0;
    int n = num;
    while(num > 0){//reverse number
        a = num % 10;
        b = ( b  * 10) + a;
        num = num / 10;
     }
     //if the reverse number equals the right number then the input number is palindrome
    if(n == b){
        return 1;
    }
    return 0;
}

