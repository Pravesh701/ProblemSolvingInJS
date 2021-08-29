#include<stdio.h>

int main(){
	int a,b;
	printf("Enter Two Number : \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d",a,b);
	return 0;
}


/*
a=10  b=20
a=30  b=20
a=30  b=10

*/