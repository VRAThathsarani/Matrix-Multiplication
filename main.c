#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int m,n;
    int i,j;
    int sum;

    while (1>0)
    {
        printf("Enter the rows of the Table A:");
        scanf("%d",&m);
        printf("Enter the columns of the Table A (the rows of the matrix X):");
        scanf("%d",&n);

        if (m>0 && n>0)
        {
            break;
        }
        printf("\nPlease Enter positive values for rows and columns!!\n\n");
    }



    int A[m][n];
    int X[n][1];
    int Y[m][1];
    int product[m][1];

    printf("\nEnter the elements of Table A:\n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEnter the elements of Table X:\n");

    for (j=0; j<n; j++)
    {
        scanf("%d",&X[j][0]);
    }

    printf("\nTable A:\n");

    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            {
                printf("|%d|",A[i][0]);
            }
            printf("\n");
    }

    printf("\nTable X:\n");

    for (i=0; i<n; i++)
    {
        printf("|%d|\n",X[i][0]);
    }

    printf("\n");

    for (i=0; i<m; i++)
    {
        sum=0;
        for (j=0; j<n; j++)
        {
            sum += A[i][j] * X[j][0];
        }
        Y[i][0] = sum;

    }

    printf("Resulting Table\n");

    for (i=0; i<m; i++)
    {
        printf("|%d|\n",Y[i][0]);
    }






    return 0;
}
