
#include<stdio.h>
void distinctElementInArray(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		// Check if the picked element is already printed 
		for(j=0;j<i;j++)
		if(arr[i]==arr[j])
			break;
			
		if(i==j)
			printf("%d ",arr[i]);
		
	}
}
int main(){
	int n;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	distinctElementInArray(arr,n);
	return 0;
}