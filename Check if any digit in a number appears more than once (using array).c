#include<stdio.h>

int main()
{
    int seen[10] = {0};
    int n,rem;
    printf("Enter the number:");
    scanf("%d", &n);

    while(n>0)
    {
        rem=n%10;
        if(seen[rem] == 1)
            break;
        else
            seen[rem] = 1;
        n=n/10;
    }
    if(n>0)
        printf("Yes");
    else
        printf("No");
    return 0;

}
