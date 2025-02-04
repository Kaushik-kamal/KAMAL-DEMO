#include<stdio.h>
int main()
{
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    int m;
    printf("enter m:");
    scanf("%d",&m);
    int nst=m;
    int nsp=1;
    for(int i=1;i<=n;i++)
    {
        {
        printf("*");
        }
        
        for(int j=1;j<=nst;j++)    // not done!!!!!
        {
            printf("*");
        }
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=nst;j++);
        {
            printf("*");
        
        nst--;
        nsp+=2;
        }
        

        printf("\n");
    }
    return 0;
}