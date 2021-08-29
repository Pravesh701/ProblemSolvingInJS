#include<stdio.h>
using namespace std;

int main()
{
int i, prime, num, n;
scanf("%d",&n);

for(n=2; n<num; n++)
{
prime = 1;
for(i=2; i<n; i++)
{
if(n%i == 0)
{
prime = 0;
break;
}
}
if(prime!=0)
{
printf("%d",n\n);
}
}
return 0;
}