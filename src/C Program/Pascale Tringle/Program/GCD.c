#include<stdio.h>


int gcd(int a,int b){
		if(b == 0)
			return a;
		return gcd(b,a % b);
	}
int main(){
	int x,y;
	scanf("%d%d",&x,&y);
	printf("GCD of %dand %d is: %d ",x,y,gcd(x,y));
}

/*

int gcd(int a,int b){
	while(a != b){
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return a;
}
int main(){
	int x,y;
	printf("Enter two values");
	scanf("%d%d",&x,&y);
	printf("GCD of %dand %d is: %d ",x,y,gcd(x,y));
}
*/