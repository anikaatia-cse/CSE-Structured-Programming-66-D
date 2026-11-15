#include <bits/stdc++.h>
using namespace std;
void attemptBonus(int bonus)
{
    bonus = 0;
}
void applyG(int marks[], int n, int bonus)
{
    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= 35 && marks[i] < 40)
            marks[i] += bonus;
    }
}

int main()
{
    int n, marks[100], grace = 5;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    attemptBonus(grace);
    applyG(marks, n, grace);

    cout << "Grace Points variable in main: " <<  grace << endl;
    cout << "Updated Marks: ";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i];
    }
    cout << endl;
}