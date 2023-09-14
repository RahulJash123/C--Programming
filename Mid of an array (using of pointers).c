#include<stdio.h>

void *midofarray(int a[], int n)
{
    return &a[n/2];
}
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = midofarray(a, n);
    printf("The mid of the array is %d", *mid);
    return 0;
}
