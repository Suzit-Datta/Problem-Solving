#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a, b, extraSocks = 0, diffSocks = 0, sameSocks = 0;
    cin >> a >> b;

    if (a > b)
    {
        extraSocks = a - b;
        cout << b << " ";
        cout << (extraSocks / 2);
    }
    else if (b > a)
    {
        extraSocks = b - a;
        cout << a << " ";
        cout << (extraSocks / 2);
    }
    else
    {
        cout << a << " ";
        cout << 0;
    }

    return 0;
}