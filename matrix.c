#include<stdio.h>
#define ROW 4
#define COL 4

int main()
{
    int a[ROW][COL],i,j,m,n,sum = 0;

    printf("Enter no. of rows :: ");
        scanf("%d", &m);
        printf("\nEnter no. of cols :: ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix :: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nEnter a[%d][%d] value :: ",i,j);
                 scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe Diagonals elements of a matrix are all zero :: \n\n");

    /*check condition to print diagonals, matrix must be square matrix*/
    if(m==n)
    {
            /*print diagonals*/
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j)
                        printf("\t%d", a[i][j]);    /*print elements*/
                    else
                        printf("\t");   /*print space*/
                }
                printf("\n\n");   /*after each row print new line*/
            }
    }
    else
    {
        printf("\nMatrix diagonal are non zero.");
    }

    return 0;
}
