#include<stdio.h>

int main()
{
   int n, result=0, q, rem;
   printf("Please enter a number\n");
   scanf("%d", &n);

   q = n;

   while(q!=0)
   {
       rem = q%10;
       result = result*10 + rem;
       q = q/10;
   }

   if(result == n)
    printf("It's a palindrom");
   else
    printf("No! It's not a palindrom");
   return 0;
}

