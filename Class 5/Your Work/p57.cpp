#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[] = "Rahim";
    char s2[] = "Christopher";
    int dWidth = 12;
    cout << "--- Table Alignment (Width = 15) ---" << endl;
    printf("|%15s|%15s|\n", s1, s2);
    printf("|%-15s|%-15s|\n", s1, s2);

    printf("\n--- String Truncation (%.5s) ---\n");
    printf("Shortened Name: %.5s\n", s2);

    printf("\n--- Combined Left-Align & Truncate (%-10.6s) ---\n");
    printf("|%-10.6s| -> padded to 10 spaces, clipped to 6 chars\n", s2);

    printf("\n--- Dynamic Width (%*s) ---\n");
    printf("|%*s|\n", dWidth, s1);
}
