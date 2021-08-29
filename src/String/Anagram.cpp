#include<iostream>
#include<string.h>
using namespace std;
#define TOTAL_CHARS 256

int checkAnagrams(char *str1, char *str2)
{
	int count1[TOTAL_CHARS] = {0};
	int count2[TOTAL_CHARS] = {0};
	int index;
	if (strlen(str1) != strlen(str2))
		return 0;
	for(index = 0; str1[index] && str2[index]; index++)
	{
		count1[str1[index]]++;
		count2[str2[index]]++;
	}
	for(index = 0; index < TOTAL_CHARS; index++)
		if(count1[index] != count2[index])
			return 0;
	return 1;
}

int main()
 {
	int t;
	cin >> t;
	while(t-- > 0){
	    char str1[100], str2[100];
	    cin >> str1 >> str2;
	    if(checkAnagrams(str1, str2)){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}