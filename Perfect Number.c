#include<stdio.h>

int main()
{
    int i,rem,sum=0,num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i=1;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
        printf("%d is a Perfect number", num);
    else
        printf("%d is not a. Perfect number", num);
    return 0;
}
