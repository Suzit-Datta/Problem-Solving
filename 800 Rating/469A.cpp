#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, x, y, result = 0, totalLevel = 0;
    vector<int> level;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        totalLevel += i;
    }

    cin >> x;
    int arrX[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arrX[i];
        level.push_back(arrX[i]);
    }

    cin >> y;
    int arrY[y];
    for (int i = 0; i < y; i++)
    {
        cin >> arrY[i];
        level.push_back(arrY[i]);
    }

    sort(level.begin(), level.end());
    for (int i = 0; i < level.size(); i++)
    {
        if (level[i] != level[i + 1])
            result += level[i];
    }

    if (result == totalLevel)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}