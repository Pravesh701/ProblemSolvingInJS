#include <bits/stdc++.h>
using namespace std;


bool isPrime(long long n)
{
    if(n<=1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
    return false;
    
    return true;
}

bool isPerfectSquare(long long n)
{
    long long ans=sqrt(n);
    return ans*ans==n;
    
}


int compare(string x, string y)
{
    string xy=x.append(y);
    string yx=y.append(x);
    
    return xy.compare(yx)>0?1:0;
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        
        vector<string>number;
        
        for(int i=0;i<n;i++)
        {
            long long rooted=sqrt(arr[i]);
            if(isPrime(rooted)&&isPerfectSquare(arr[i]))
            {
                number.push_back(to_string(arr[i]));
            }
        }
        if(number.size() > 0)
        {
             sort(number.begin(),number.end(),compare);
        
       for(auto x:number)
       cout<<x;
        }
        else
        cout <<-1;
       
       
       cout<<endl;
        
    }
}
