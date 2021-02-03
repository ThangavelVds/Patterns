#include<stdio.h>

void main()
{
    int l,b;
    scanf("%d %d",&l,&b);
    for(int upper = 1; upper <=l ; upper++ )
    {
        printf("* ");
    }
    printf("\n");
    for(int mid = 1; mid <=b-2 ; mid++)
    {
        printf("* ");
        for(int space =1 ; space <= l-2; space++)
        {
            printf("  ");
        }
        printf("* ");
        printf("\n");
    }
    for(int lower = 1; lower <=l ; lower++ )
    {
        printf("* ");
    }
    
}
