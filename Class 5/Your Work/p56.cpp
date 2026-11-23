#include <bits/stdc++.h>
using namespace std;
int main()
{
    char fName[50];
    char alphaOnly[50];
    cin >> fName;
    scanf("%[A - Za-z]", alphaOnly);
    cout << "Full Name: " << fName << endl;
    cout << "City Name: " << alphaOnly << endl;
}

