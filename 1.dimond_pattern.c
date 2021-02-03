#include<stdio.h>

void up_stars(int line,int n)
{
    for(int space = 1 ; space <= n - line ; space++)
    {
        printf("  ");
    }
    for(int star = 1 ; star<=(2*line)-1 ; star++)
    {
        printf("* ");
    }
    printf("\n");

}

void main()
{
    int n;
    printf("\nEnter number of lines :");
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++)
    {
        up_stars(i,n);
    }
    for(int i = n-1 ; i>0 ; i--)
    {
        up_stars(i,n);
    }

}
