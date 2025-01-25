#include <stdio.h>
int main()
{
    for(int i=1;i<=3;i++)   //outer loop --> no. of lines
    {
        for(int j=1;j<=5;j++)    // inner loop --> no. of stars in each line 
        {
        printf("*");
        }
    
     printf("\n");
    }
     return 0;
}