#include <stdio.h>
#include <string.h>
#include <assert.h>
//左旋字符    例：ABCD  ->  BCDA

void reverse(char* arr1 , char* arr2)
{
    assert(arr1);
    assert(arr2);
    while (arr1<arr2)
    {
        char ret = *arr1;
        *arr1 = *arr2;
        *arr2 = ret;
        arr1++;
        arr2--;
    }
}
void move(char* arr , int n)
{
    assert(arr);
    int len = strlen(arr);
    reverse(arr,arr+n-1);
    reverse(arr+n,arr+len-1);
    reverse(arr, arr+len-1);
}
int main()
{
    char arr[] = "abcdef" ; 
    move(arr , 4);
    printf("%s\n",arr);
    return 0;
}