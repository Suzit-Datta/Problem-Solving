#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int count1 = 2, count2 = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 0)
            {
                if (i == count1 && j == m)
                {
                    cout << "#";
                    count1 += 4;
                }
                else if (i == count2 && j == 1)
                {
                    cout << "#";
                    count2 += 4;
                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    return 0;
}