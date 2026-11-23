#include <bits/stdc++.h>
using namespace std;
int main()
{
    chat city[20] = "Dhaka";
    cout << "Length of " << city << " is: " << strlen(city) << endl;
    city[3] = '\0';
    cout << "After inserting '\\0' at index 3: " << city << " Length = " << strlen(city) << endl;
    char broken[4] = {'T', 'e', 's', 't'};
    cout << "Valid char array size: " << sizeof(broken) << " bytes" << endl;
}

