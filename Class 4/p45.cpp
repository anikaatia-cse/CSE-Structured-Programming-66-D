#include <bits/stdc++.h>
using namespace std;
int Score(int scores[], int n)
{
    int max = scores[0];
    for (int i = 1; i < n; i++)
    {
        if (scores[i] > max)
            max = scores[i];
    }
    return max;
}

double Average(int scores[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    return (double)sum / n;
}

int main()
{
    int n, scores[100];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    cout << "Highest Score = " << Score(scores, n) << endl;
    cout << "Class Average = " << Average(scores, n) << endl;
}