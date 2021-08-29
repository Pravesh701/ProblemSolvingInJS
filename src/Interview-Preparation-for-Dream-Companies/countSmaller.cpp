#include<iostream>
using namespace std;
void countSmaller(int, int[], int);
int main()
 {
	int t;
	cin >> t;
	while(t-- > 0){
	    int n,x;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[n];
	    }
	    cin >> x;
	    countSmaller(n, arr, x);
	    cout<< endl;
	}
	return 0;
}
void countSmaller(int n, int arr[], int x){
    int i, count=0;
    for(i=0; i < n; i++){
        if(arr[i] <= x){
            count++;
        }
    }
    cout << count;
}
