#include<stdio.h>

int main(){
	int N,i,a=-1,b=1,c;
	printf("Enter a number for Fibonacci series: \n");
	scanf("%d",&N);
	for(i=0;i<=N;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}