#include<stdio.h>
#include<conio.h>

main()
{
    char i,j,k;
    for(i=5; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf("%d",j);
        }
        for(k=4; k>=i; k--)
        {
            printf(" ");
        }
        printf("\n");
    }

}
