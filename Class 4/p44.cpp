#include <bits/stdc++.h>
using namespace std;

double CB(int unit, double rpu, char ctype)
{
    double base = unit * rpu;
    if (ctype == 'C' || ctype == 'c')
        return base + (base * 0.15);
    return base;
}
int main()
{
    int Used;
    double rate;
    char type;
    cin >> Used >> rate >> type;
    double pay = CB(Used, rate, type);
    cout << "Total Payable Bill = " << pay << "BDT" << endl;
}
