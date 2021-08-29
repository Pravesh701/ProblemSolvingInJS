#include<stdio.h>
int main(int argc,char *argv[]){
	if(argc==1){printf("please enter a parameter");}
	else{
	printf(argv[0]);
	printf(argv[1]);
	printf(argv[2]);
	}
	return 0;
}