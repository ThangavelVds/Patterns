#include<stdio.h>

void main()
{
    int n, val = 1, start = 0;
    printf("\nEnter lines :");
    scanf("%d",&n);
    for(int line = 1 ; line <= n ; line++)
    {
        if(line%2 == 0)
        {
            for(int nums = 1; nums<=line ; nums++)
            {
                printf("%d ",val);
                val = val + 1;
            }
            start = val;
            printf("\n");
        }
        else
        {
            for(int nums = start+line-1; nums>=start ; nums--)
            {
                if(nums == 0)
                {
                    printf("%d ",nums+1);
                    val = val + 1;
                }

                else
                {
                printf("%d ",nums);
                val = val + 1;
                }
            }
            printf("\n");
        }
    }
}