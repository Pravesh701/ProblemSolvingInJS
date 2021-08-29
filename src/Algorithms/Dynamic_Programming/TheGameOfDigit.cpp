#include <bits/stdc++.h>
using namespace std;
priority_queue<long long> pq;
int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    
	    if(n <= 9){
	        cout << n << endl;
	    }
	    else{
	    
	    long long c = 0;
	    for(long long i = 2;i<10; i++){
	        if(n%i == 0){
	            pq.push(i);
	        }
	    }
	    
	    if(pq.size() == 0){
	        cout << "-1" << endl;
	    }
	    else{
	    string s = "";
	    
	    while(!pq.empty()){
	        
	        long long k = pq.top();
	        pq.pop();
	        
	        while(n % k == 0){
	            s += to_string(k);
	            n = n/k;
	        }
	    }

	    if(n > 9){
	        cout << "-1" << endl;
	    }
	    else{
	    reverse(s.begin(), s.end());
	    
	    cout << s << endl;
	    }
	    }
	    }
	    
	    while(!pq.empty()){
	        pq.pop();
	    }
	}
	return 0;
}
