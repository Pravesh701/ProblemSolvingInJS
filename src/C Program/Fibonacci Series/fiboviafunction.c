#include<stdio.h>
int main(){
	int fibo(int);
	int i,n;
	printf("Enter a terms which want to print.");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ",fibo(i));
	}
	return 0;
}
int fibo(int n){
	if(n==1 || n==2)
		return(1);
	return(fibo(n-1)+fibo(n-2));
}