#include <bits/stdc++.h>
using namespace std;
int CT(int quiz, int mid, int final)
{
    return quiz + mid + final;
}
double CP(int total, int max)
{
    return ((double)total / max) * 100.0;
}
char AS(double p)
{
    if (p >= 80.0)
        return 'A';
    if (p >= 65.0)
        return 'B';
    if (p >= 50.0)
        return 'C';
    return 'F';
}

int main()
{
    int quiz, mid, final;
    cin >> quiz >> mid >> final; 
    int total = CT(quiz, mid, final);
    double pct = CP(total, 100);
    char grade = AS(pct);
    cout << "Total: " << total / 100 << " | Percentage: " << pct << " | Grade: " << grade << endl;
}
