#include<stdio.h>

int main(){
    int num,f=1;
    scanf("%d",&num);
    //x=num;
    while(num>=1){
        f=f*num;
        num--;
    }
    printf("Input Number is %d.\n",f);
    
}

//Hacker Earth Best Solution
/*
#include<stdio.h>
int main()
{
int N,i,fact;
fact=1;
 
scanf("%d",&N);
 
 
for(i=1;i<=N;i++)
{
fact=fact*i;
}
printf("%d",fact);
return 0;
}
*/