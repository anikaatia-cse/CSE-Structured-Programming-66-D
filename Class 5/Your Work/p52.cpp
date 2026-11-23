#include <bits/stdc++.h>
using namespace std;
int main()
{
    char topScorer[30] = "Nusrat Jahan";
    char runnerUp[30] = "Tanvir Hasan";
    char temp[30];
    cout << "Before swap => 1st: " << topScorer << " || 2nd: " << runnerUp << endl;
    strcpy(temp, topScorer);
    strcpy(topScorer, runnerUp);
    strcpy(runnerUp, temp);
    cout << "After swap => 1st: " << topScorer << " || 2nd: " << runnerUp << endl;
}

