// With % operator ODD Even Program
/*
#include<stdio.h>

int main(){
	int x;
	printf("Enter a number .\n");
	scanf("%d",&x);
	if(x%2==0){
		printf("Even Number");
	}
	else{
		printf("Odd Number");
	}
	return 0;
}
*/
// Without Percentage perator;

/*
#include<stdio.h>

int main(){
	int x;
	printf("Enter a number .\n");
	scanf("%d",&x);
	if(x&&1){
		printf("Even Number");
	}
	else{
		printf("Odd Number");
	}
	return 0;
}
*/
// tricky ODD Even Numbers
#include<stdio.h>

int main(){
	int x;
	printf("Enter a number .\n");
	scanf("%d",&x);
	if(x%2){
		printf("ODD Number");
	}
	else{
		printf("EVEN Number");
	}
	return 0;
}