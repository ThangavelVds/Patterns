#include<stdio.h>

void main()
{
    int n, val = 1,start,ctr;
    printf("\nEnter number of lines :");
    scanf("%d",&n);
    ctr = n * (n+1);
    start = n;
    for(int line = 1;line <= n ; line++)
    {
        for(int space = 1 ; space<=line-1; space++)
        {
            printf("  ");
        }
        for(int nums = n ; nums >= line; nums--)
        {
            printf("%d ",val);
            val = val + 1;
        }
        for(int nums = start ; nums > 0 ; nums--)
        {
            printf("%d ",ctr - nums + 1);
            if(nums == 1)
            {
                ctr = ctr - start;
            }

        }
        start = start - 1;
        printf("\n");
         
    }
}