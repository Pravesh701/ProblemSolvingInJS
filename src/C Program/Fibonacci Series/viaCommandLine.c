#include<stdio.h>
#include<stdlib.h>
int fibo(int);
int main(int argc,char *argv[]){
	int i;
	if(argc==1){ printf("Please enter a Number");}
	else{
	int num=atoi(argv[1]);
	for(i=1;i<=num;i++){
		printf("%d ",fibo(i));
	}
	}
	return 0;
}
/*
int fibo(int n){
	int a=-1,b=1,c,i;
	for(i=1;i<=n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
*/
int fibo(int n){
	if(n==1 || n==2)
		return(1);
	return(fibo(n-1)+fibo(n-2));
}