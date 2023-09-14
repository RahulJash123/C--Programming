#include<stdio.h>


int main()
{
    int a[] = {2,56,45,258,1,7,6,44,68,987,45,4};
    int min,max;
        int i;
    min = max = a[0];
    for(i=1;i<12;i++)
    {
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    printf("Minimum value of the array is %d", min);
    printf("\nMaximum value of the array is %d", max);
    return 0;
}
