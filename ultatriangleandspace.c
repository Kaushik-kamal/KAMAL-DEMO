#include<stdio.h>
int main()
{
     int n;
     printf("enter number of lines:");
     scanf("%d",&n);
     int nsp=0;
     int nst=n;
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=nsp;j++)//spaces
        {
            printf(" ");
            
        }
        nsp++;
        for(int k=1;k<=nst;k++)//stars
        {
            printf("*");
            
        }
        nst--;
        printf("\n");
     }
     return 0;
}