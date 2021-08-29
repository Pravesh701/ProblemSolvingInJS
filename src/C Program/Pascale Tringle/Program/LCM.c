#include<stdio.h>
int gcd(int,int);
int lcm(int arr[],int n){
	int ans=arr[0];
	for(int i=0;i<n;i++){
		ans=(arr[i]*ans)/(gcd(arr[i],ans));
	}
	return ans;
}
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the value of array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("LCM of given array is %d",lcm(arr,n));
	return 0;
}