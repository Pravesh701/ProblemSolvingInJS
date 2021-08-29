// Find a maximum occurring character in a given string (Approach - 1) BruteForce

#include<iostream>
#include<string>
using namespace std;

void maxOccuringCharacterInString(string str){
	int n = str.size();
	int curr_Char, count = 0, maxChar = 0;
	string max_String_Number;
	for(int i=0; i<n; i++){
		curr_Char = str[i];
		for(int j=0; j<n; j++){
			if(curr_Char == str[j]){
				count++;
			}
		}
		if(count > maxChar){
			maxChar = count;
			max_String_Number = str[i];
		}
		count = 0;
	}
	cout << "Max STring Char is " << max_String_Number << endl;
}

int main(){
	string arr;                               // T(n) = O(n2)
	cin >> arr;
	maxOccuringCharacterInString(arr);
	return 0;
}

// Find a maximum occurring character in a given string (Approach -2)
/*
Sort array of string in increasing order and maintain these 4 variable

cuur_Char                T(n) = O(nlogn)
cout
max_Char
max_Count

*/


// Find a maximum occurring character in a given string (Approach - 3)


// Apply Binary Search method to build BST and if character repeat then count with character 
// in a varibal       T(n) = nlogn  S(n) = O(n)   better Sorting






// Find a maximum occurring character in a given string (Approach - 4)  HashTable

// implementation to find a character which appears maximum number of time on string using HashTable

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COUNT 256

char getMaximumOccuringChar(char *str)
{
	int temp[COUNT] = {0};
	int len = strlen(str), max = -1, index;
	char result;
	for(index = 0; index < len; index++)
		temp[str[index]]++;
	for(index = 0; index < len; index++ )
	{
		if(max < temp[str[index]])
		{
			max = temp[str[index]];
			result = str[index];
		}
	}
	return result;
}

int main()
{
	char str[] = "ravindra ravula";
	printf("Maximum occuring character is = %c\n", getMaximumOccuringChar(str));
	return 0;	
}

*/




