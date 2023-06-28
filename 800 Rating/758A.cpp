#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, maxNum = 0, totalBurle = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        totalBurle += maxNum - arr[i];
    }

    cout << totalBurle;
    return 0;
}