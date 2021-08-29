#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
long doubleSize(vector<long>, long);

int main(){
	int t;
	printf("Enter Number of Test Cases  ");
	scanf("%d",&t);
	while(t--){
		int i,n;
		long b;
		cout << "Enter Initial Size of Vector";
		cin >> n;
		vector<long> arr(n);
		cout << "Enter value of vectors";
		for(i=0;i<n;i++){
			cin >> arr[i];
		}
		cout << "Enter the value of B";
		cin >> b;
		long result = doubleSize(arr, b);
		cout<< result << endl;
	}
	return 0;	
}
long doubleSize(vector<long> v, long b){
	int i;
	int n = v.size();
	for(i = 0; i<n;i++){
		if( b > v[i]){
			continue;
		}else{
			b = b*2;
		}
	}
	return b;
}














