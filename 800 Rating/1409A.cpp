#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int count = 0;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            int storeNum = a - b;
            if (storeNum % 10 == 0)
            {
                cout << (storeNum / 10) << endl;
            }
            else
            {
                cout << (storeNum / 10) + 1 << endl;
            }
        }
        else
        {
            int storeNum = b - a;
            if (storeNum % 10 == 0)
            {
                cout << (storeNum / 10) << endl;
            }
            else
            {
                cout << (storeNum / 10) + 1 << endl;
            }
        }
    }

    return 0;
}