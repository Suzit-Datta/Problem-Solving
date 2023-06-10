#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int add = 0, result = 0;
    int sum[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add += arr[i][j];
        }
        sum[i] = add;
        add = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (sum[i] > 1)
        {
            result++;
        }
    }

    cout << result;

    return 0;
}