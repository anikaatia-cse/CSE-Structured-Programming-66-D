#include <stdio.h>
int main()
{
    int n, a1[100], a2[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }
    printf("Array 2: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a2[i]);
    }
    return 0;
}
