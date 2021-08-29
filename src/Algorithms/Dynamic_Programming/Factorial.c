#include<stdio.h>
#define MAX 100
int factorial(int);

int main(){
	int t;
	printf("Enter Number of Test Cases.\n");
	scanf("%d",&t);
	while(t-- > 0){
		int n;
		printf("Enter a number for factorial\n");
		scanf("%d",&n);
		//int fact[n];
		int val = factorial(n);
		printf("%d",val);
		printf("\n");
	}
}

int fact[MAX];
int factorial(int n){
	if(n == 1){
		return 1;
	}
	else if(fact[n] != 0){
		return fact[n];
	}
	else 
		return fact[n] = n*factorial(n-1);

}