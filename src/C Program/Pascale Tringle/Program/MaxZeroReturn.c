#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define COL 4
#define ROW 4
//using namespace std;
int main()
{
    int arr[ROW][COL]= {
                     {1,1,1,1},
                     {1,1,0,0},
                     {1,0,0,0},
                     {1,1,0,0},
                     };
                     
    int rownum;
    int i = 0, j = COL-1;
    while(i<ROW && j>0)
    {
      if(arr[i][j]==0)
      {
        j--;
        rownum=i;}
      else
      i++;
    }
    printf("%d",rownum);
    getch();
    return 0;
}