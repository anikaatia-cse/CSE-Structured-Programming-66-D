#include <bits/stdc++.h>
using namespace std;
int main()
{
    char course[]= "CSE-101";
    const char *university = "DUET";
    course[0] = "E";
    cout << course << endl;
    cout << "University: " << university << endl;
    university = "BUET";
    cout << "New University: " << university << endl;
}

