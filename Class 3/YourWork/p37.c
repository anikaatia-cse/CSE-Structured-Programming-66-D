#include <stdio.h>
int main()
{
    char s[50];
    scanf("%s", s);
    int length = 0;
    for (int i = 0; i < 50; i++)
    {
        if (s[i] != '\0')
        {
            length++;
        }
        else
        {
            break;
        }
    }
    printf("String length = %d\n", length);
    return 0;
}