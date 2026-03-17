#include<stdio.h>

int main()
{
    int r,c,i,j;
    int sum=0;

    printf("Enter row size: ");
    scanf("%d",&r);

    printf("Enter column size: ");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter array elements on index no.:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nAddition of rows:\n");

    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum = sum + a[i][j];
        }
        printf("Row %d sum = %d\n", i+1, sum);  
    }

    printf("\nAddition of columns:\n");

    for(j=0;j<c;j++)
    {
        sum=0;
        for(i=0;i<r;i++)
        {
            sum = sum + a[i][j];
        }
        printf("Column %d sum = %d\n", j+1, sum); 
    }

    return 0;
}