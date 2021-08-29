#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[]){
	int num,f=1;
	if(argc==1){printf("Please enter number");}
	else{
	num=atoi(argv[1]);
	 while(num>=1){
        f=f*num;
        num--;
    }
    printf("Input Number is %d.\n",f);
	}
}