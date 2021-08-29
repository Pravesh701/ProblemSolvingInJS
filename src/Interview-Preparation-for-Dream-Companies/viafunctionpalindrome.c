#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
	printf("Enter a string \n");
	gets(str);
	if(isPalindrome(str)){
		printf("It is a Palindrome ");
	}
	else{
		printf("Not a Palindrome ");
	}
	
}
int isPalindrome(char s[]){
	int l,i;
	l=strlen(s);
	for(i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i])
			return 0;
	}
	return 1;
}