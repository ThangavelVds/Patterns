#include<stdio.h>

void upper_lower_portion(int line, int input)
{
    for(int space = 1 ; space <= input - line; space++)
        {
            printf("  ");
        }
        for(int star = 1; star <= (2*line)-1 ; star++)
        {
            printf("* ");
        }
        for(int space = 1 ; space <= input - line; space++)
        {
            printf("  ");
        }
        for(int space = 1 ; space <= input - line; space++)
        {
            printf("  ");
        }
        for(int star = 1; star <= (2*line)-1 ; star++)
        {
            printf("* ");
        }
        printf("\n");
}

void main()
{
    int input;
    scanf("%d",&input);
   /* for(int u_line = input,d_line = 1; u_line>0 ,d_line<=input; u_line--,d_line++)
    {
        upper_lower_portion(u_line,input);
        upper_lower_portion(d_line,input);
    } */

   for(int line = input; line>0 ; line--)
    {
        upper_lower_portion(line,input);
    }

    for(int line = 1; line<=input ; line++)
    {
        upper_lower_portion(line,input);
    }
}
