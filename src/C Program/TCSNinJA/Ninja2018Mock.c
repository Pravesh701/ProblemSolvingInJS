#include <stdio.h>
void main() 
{
	//code
	int i=2, j=1, k, l, count=0, n;
	scanf("%d", &n);
	int a[n+1];
	a[0]=0;
	a[1]=1;
	while(i<=n)
	{
	    if(i%2==0)
	    {
	    l=i;
	       do
	       {
	           j++;
	           for(k=2; k<j; k++)
	           {
	               if(j%k==0)
	               count++;
	           }
	           if(count==0)
	           {
	               a[i]=j;
	               i++;
	               break;
	           }
	           count=0;
	       }while(l==i);
	    }
	    else
	    {
	        if(i==3)
	        a[i]=a[i-2]+a[0];
	        else
	        a[i]=a[i-2]+a[i-4];
	        
	        i++;
	    }
	}
	printf("%d",a[n]);
}






/*
	    printf("%d\t",i);
	    printf("%d\t",a[i-1]);&*/