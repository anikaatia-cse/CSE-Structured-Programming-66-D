#include <stdio.h>
int main()
{
    int n, matrix[10][10], sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }

    printf("Diagonal sum = %d\n", sum);
    return 0;
}