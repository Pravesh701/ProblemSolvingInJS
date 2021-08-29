#include<stdio.h>
int sumOfDigit(int num){
	int sum=0,digit=0;
	while(num != 0){
		digit = num%10;
		sum = sum + digit;
		num /=10;
	}
	return sum;
}
int main(){
	int n,sum=0;
	printf("Enter a digits\n");
	scanf("%d",&n);
	sum=sumOfDigit(n);
	printf("Sum of digit of %d is = %d",n,sum);
	return 0;
}


// C program to compute sum of digits in  
// number. 

//# include<stdio.h> 
  
/* Function to get sum of digits */
/*
int getSum(int n) 
{  
   int sum = 0; 
   while (n != 0) 
   { 
       sum = sum + n % 10; 
       n = n/10; 
   } 
   return sum; 
} 
  
int main() 
{ 
  int n = 123; 
  printf(" %d ", getSum(n)); 
  return 0; 
}
 */