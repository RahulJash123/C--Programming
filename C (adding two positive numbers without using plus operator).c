#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the two numbers you want to add (positive integer): \n");
    scanf("%d %d", &x, &y);

    while(y != 0)
    {
        x++;
        y--;
    }
    printf("Sum of the  two numbers is %d", x);
    return 0;
}
