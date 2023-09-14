#include<stdio.h>
int main()
{
    int *ptr, a = 10;
    ptr = &a;
    printf("%d", sizeof(ptr));
    return 0;
}
