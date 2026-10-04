#include <stdio.h>
int main()
{
    int n, a[100], target, found = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            found = 1;
            printf("Target found at index: %d\n", i);
            break;
        }
    }
    if (found == 0)
    {
        printf("Not found\n");
        return 0;
    }
}