#include<stdio.h>
#include<stdlib.h>
int swapFun(int,int);
int main(int argc,char *argv[]){
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	swapFun(a,b);
	return 0;
}
int swapFun(int x,int y){
	//int temp=0;
	//temp=x;
	//x=y;
	//y=temp;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping first number is %d \n",x);
	printf("After swapping second number is %d",y);
	return 0;
}