#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d",&num);
    int i=0;
    for(i=1;i<=num;i++)
    {
        int j=0;
        for (j=0;j<num-i;j++)
        {
            printf(" ");
        }
        for (j=0;j<2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i=num+1;i<=num*2-1;i++)
    {
        int j=0;
        for(j=0;j<i-num;j++)
        {
            printf(" ");
        }
        for(j=0;j<4*num-2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

        //下半部分，第二种方法
    for (i=0;i<num-1;i++)
    {
        int j=0;
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*(num-1-i)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *