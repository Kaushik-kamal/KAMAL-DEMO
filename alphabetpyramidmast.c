#include<stdio.h>
int main()
{
    int n;
    printf("enter number of lines:");
    scanf("%d",&n);
    int nsp=n-1;
    int q=1;
    for(int i=1;i<=n;i++)
    
    {
        int r=1;
        int a=i-1;
        for(int q=1;q<=nsp;q++)
        {
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++)
        {
            int u=r+64;
            char ch=(char)u;
            printf("%c",ch);
            r++;
        }
        for(int k=1;k<=i-1;k++)
        {
            int s=a+64;
            char ch=(char)s;
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }   
    return 0;
}