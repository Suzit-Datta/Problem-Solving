#include <iostream>
using namespace std;

int main()
{
    int arrSize, x = 0, y = 0, z = 0;
    cin >> arrSize;
    int arr[arrSize][3];

    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < arrSize; i++)
    {
        x += arr[i][0];
    }

    for (int i = 0; i < arrSize; i++)
    {
        y += arr[i][1];
    }

    for (int i = 0; i < arrSize; i++)
    {
        z += arr[i][2];
    }

    if (x==0 && y == 0 && z ==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}