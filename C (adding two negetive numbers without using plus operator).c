#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter the two numbers you want to add (negetive integer): \n");
    scanf("%d %d", &x, &y);

    while(x != 0)
    {
        y--;
        x++;
    }
    printf("Sum of the  two numbers is %d", y);
    return 0;
}
