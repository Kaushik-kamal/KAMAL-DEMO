#include<stdio.h>
int main()
{
    int num=1;
    int nsp=3;
    for( int i=1;i<=4;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
        printf(" ");
        }
        nsp-=1;
        for(int j=1;j<=num;j++)
        {
            printf("%d",j);
        }
        num+=2;


          printf("\n");
    }
      return 0;
}