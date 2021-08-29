#include<stdio.h>
#include<string.h>

int main(){
	int l,i;
	char str[20];
	printf("Enter the string. \n");
	gets(str);
	
	l=strlen(str);
	for(i=0;i<l/2;i++){
		if(str[i]!=str[l-1-i]){
			printf("Not palindrome");
			break;
		}
		
	}
	if(i==l/2)
		printf("Palindrome");
	
}