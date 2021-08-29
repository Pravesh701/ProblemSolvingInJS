#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int f[50],s[20];
	int i=1,j=0,k=0,temp;
	if(argc==1){printf("Enter num");}
	else{
	for(i=1;i<=argc;i++){
		temp=atoi(argv[i]);
		f[j]=temp;
		j++;
	}
	for(i=1;i<argc;i++){
		temp=f[j];
		s[k]=temp;
		k++;
		j--;
	
	}
	printf("%d ",s);
	}
}