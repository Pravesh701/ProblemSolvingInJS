#include<bits/stdc++.h>
using namespace std;
int linearSearch(int [], int, int);
int main(){
	int value = 50;
	int arr[] = {10,20,60,2,5,23,50,23};
	int found = linearSearch(arr, 8, value);
	if(found == value){
		cout << "The value 50 is present in the list" << endl;
	}else{
		cout << "Value not found in the array" << endl;
	}
	return 0;

}

//Using Interative version
/*
int linearSearch(int arr[], int size, int val){
	for(int i=0; i<size; i++){
		if(arr[i] == val){
			return val;
		}
	}
	return 0;
}
*/

//Using Recursive version
int linearSearch(int arr[], int size, int val){
	
}