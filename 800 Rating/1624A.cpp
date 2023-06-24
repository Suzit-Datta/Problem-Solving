#include "bits/stdc++.h"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxNum = 0, minNum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (maxNum <= arr[i])
            {
                maxNum = arr[i];
            }
        }
        minNum = maxNum;
        for (int i = 0; i < n; i++)
        {
            if (minNum >= arr[i])
            {
                minNum = arr[i];
            }
        }
        cout << (maxNum - minNum) << endl;
    }

    return 0;
}