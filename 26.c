#include <stdio.h>

//喝汽水，1元一瓶，2个空瓶换1瓶，给money元，可以喝total瓶
int main()
{
    int money = 0;
    int total = 0;
    int empty = 0;
    //money 钱   total 饮料  empty  空瓶
    scanf("%d",&money);
    total = money;
    empty = total;
    while (empty>=2)
    {
        total=empty/2+total;
        empty=empty/2+empty%2;
    }
    printf("%d",total);
    return 0;
}