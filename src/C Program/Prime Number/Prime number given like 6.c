#include<stdio.h>

int main(){
	int N,i,x=2;
	printf("Enter a number :");
	scanf("%d",&N);
	
	while(N){
		for(i=2;i<x;i++)
			if(x%i==0)
				printf("Not prime);
			break;
			
	}
	if(i==x){
		printf("% d",x);
		N--;
	}
	x++;
}