#include <stdio.h>

//A:不是我   B：是C   C：是D    D：C在胡说
//已知三个人真，一个人假

 int main()
 {
    int k = 0;
    for (k = 'a' ; k <= 'd' ; k++)
    {
        if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
        {
            printf("k is %c",k);
        }
    }
    return 0;
 }