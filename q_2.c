#include<stdio.h>

int main()
{
    int b,c,i,n,max;

    printf("Enter row size: ");
    scanf("%d",&b);

    printf("Enter column size: ");
    scanf("%d",&c);

    int a[b][c];

    printf("Enter array elements on index no.:\n");

    for(i=0;i<b;i++)
    {
        for(n=0;n<c;n++)
        {
             printf("a[%d][%d] = ", i, n);
            scanf("%d",&a[i][n]);
        }
    }

    max = a[0][0];

    for(i=0;i<b;i++)
    {
        for(n=0;n<c;n++)
        {
            if(a[i][n] > max)
            {
                max = a[i][n];
            }
        }
    }

    printf("Largest element is: %d",max);

    return 0;
}