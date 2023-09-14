#include<stdio.h>
#define max 50

int main()
{
   int a[max][max],b[max][max],product[max][max];
   int i,j,k,arows,acolumns,brows,bcolumns;
   int sum=0;

   printf("Enter the rows and columns of the matrix: ");
   scanf("%d %d", &arows, &acolumns);
   printf("Enter the elements of matrix a: \n2");
   for(i=0; i<arows; i++)
   {
       for(j=0; j<acolumns; j++)
       {
           scanf("%d", &a[i][j]);
       }
   }
   printf("Enter the rows and columns of next matrix: ");
   scanf("%d %d", &brows,&bcolumns);
   if(acolumns != brows)
    printf("Sorry! We can not do the operation");
   else
   printf("Enter the elements of matrix b: \n");
   for(i=0; i<brows; i++)
   {
       for(j=0; j<bcolumns; j++)
       {
           scanf("%d", &b[i][j]);
       }
   }

    printf("\n");
   for(i=0;i<arows;i++)
   {
       for(j=0;j<bcolumns;j++)
       {
           for(k=0;k<brows;k++)
           {
               sum += a[i][k] * b[k][j];
           }
           product[i][j] = sum;
           sum=0;
       }
   }
   printf("The resultant matrix is \n");
   for(i=0; i<arows; i++)
   {
       for(j=0; j<bcolumns; j++)
       {
           printf("%d ", product[i][j]);
       }
       printf("\n");
   }
   return 0;
}

