//Pair(a,b) check sum  is equal to x or not.
#include<bits/stdc++.h>
using namespace std;
void pairOfArraySum(int, int[], int);

int main(){
	int t;
	cout << " enter no. of test cases" << endl;
	cin >> t;
	while(t-- > 0){
		int n,i,val;
		cout << "Enter the size of array" << endl;
		cin >> n;
		int arr[n];
		cout << "Enter the elements of array" << endl;
		for(i=0; i<n; i++){
			cin >> arr[i];
		}
		cout << "Enter value for check Sum"<< endl;
		cin >> val;
		pairOfArraySum(n, arr, val);
		cout << endl;
	}
}
// First Naive Approache or Brute Force approache with O(n^2) time complexity
/*
void pairOfArraySum(int n, int arr[], int x){
	int i,j,k=0;
	for(i=0; i<n; i++){
		k++;
		for(j=1; j<n; j++){
			if((arr[i]+arr[j]) == x){
				cout << "Pair is " <<"("<<arr[i]<<", "<< arr[j] << ")" <<endl;
				return;
			}
		}
	}
	if(k == n)
		cout << "There is not possible any pair";
}
*/

// Second Approache which is Hash Approached
//Time complexity: O(n)
//Space complexity: O(K) where K is range of integers

void pairOfArraySum(int n, int arr[], int x){
	int i, temp;
	int hash[10000];
	for(i=0; i<n; i++){
		temp  = x- arr[i];
		if(temp >= 0 && hash[temp] == 1){
			cout << "Pair is " <<"("<<temp<<", "<< arr[i] << ")" <<endl;
		}
		hash[arr[i]] = 1;
	}
	return;
}
















