#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter row & column size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements on index no.:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("The transpose matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}