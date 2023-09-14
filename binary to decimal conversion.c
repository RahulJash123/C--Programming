#include<stdio.h>

int main()
{
    int binary,decimal = 0,rem,base = 1;
    printf("Enter the binary number: ");
    scanf("%d", &binary);
    while(binary!= 0)
    {
        rem = binary%10;
        decimal=decimal+rem*base;
        binary=binary/10;
        base=2*base;
    }
    printf("The decimal value of the given number is %d", decimal);
    return 0;
}
