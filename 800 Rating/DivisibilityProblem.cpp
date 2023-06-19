#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t, moves = 0;
    cin >> t;
    int testCase[t][2];

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> testCase[i][j];
        }
    }

    for (int i = 0; i < t; i++)
    {
        int a, b, reminder = 0;
        a = testCase[i][0];
        b = testCase[i][1];
        if (a % b != 0)
        {
            reminder = a % b;
            moves = b - reminder;
            cout<<moves<<endl;
        }
        else
        {
            cout << moves << endl;
        }
        moves = 0;
    }

    return 0;
}