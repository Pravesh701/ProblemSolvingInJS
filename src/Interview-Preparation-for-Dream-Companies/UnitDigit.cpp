#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    long long num;
	    cin>>num;
	    
	    switch (num){
	        case 1: cout<<1<<endl;
	                break;
	        case 2: cout<<2<<endl;
	                break;
	        case 3: cout<<6<<endl;
	                break;
	        case 4: cout<<4<<endl;
	                break; 
	        default: cout<<0<<endl;
	    }
	    
	}
	
	return 0;
}
