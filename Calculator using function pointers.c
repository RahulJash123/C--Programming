#include<stdio.h>
#define ops 4


int sum(int a, int b) {
 return a+b;
 }

int sub(int a, int b) {
 return a-b;
 }
int mult(int a, int b) {
 return a*b;
 }
int div(int a, int b) {
 return a/b;
 }

int main()
{
    int (*ptrfun[ops]) (int, int) = {sum, sub, mult, div};
    int choice,a,b;
    printf("Enter your choice: 0 for sum, 1 for sub, 2 for mult, 3 for div:\n");
    scanf("%d", &choice);
    printf("Enter two number: \n");
    scanf("%d %d", &a, &b);
    printf("Result is %d", ptrfun[choice](a, b));
    return 0;
}
