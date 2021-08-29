#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;
void makePlindromic(string, int);

int main(){
	string str;
	cin >> str;
	makePlindromic(str, str.length());
	return 0;
}
void makePlindromic(string str, int n){
	string str2 = str;
	std::reverse(str2.begin(), str2.end());
    str = str + str2;
    cout << str <<endl;
}