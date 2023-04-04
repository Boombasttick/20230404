#include <stdio.h>
#include <string.h>
#include <assert.h>
//左旋字符    例：ABCD  ->  BCDA

void move(char* arr , int n)
{
    assert(arr);
    int i=0;
    int len = strlen(arr);
    for (i=0;i<n;i++)
    {
        char ret = *arr;
        int j=0;
        for(j=0;j<len-1;j++)
        {
            *(arr+j) =*(arr+j+1);
        }
        *(arr+len-1) = ret;
    }
}
int main()
{
    char arr[] = "abcdef" ; 
    move(arr , 4);
    printf("%s\n",arr);
    return 0;
}