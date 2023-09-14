#include<stdio.h>

int main()
{
    int i,j,num,mult,c;
    printf("Enter the number of the table: ");
    scanf("%d", &num);
    printf("\nEnter the number of multiplication: ");
    scanf("%d", &mult);

    for(i=1;i<=mult;i++)
    {
        for(j=1;j<=num;j++)
        {
           if (j<=num-1)
           printf("%2dx%2d=%2d   ",j,i,i*j);
          else
	    printf("%2dx%2d=%2d ",j,i,i*j);

      }
     printf("\n");
    }
}

