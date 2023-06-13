#include <iostream>
using namespace std;

int main()
{
    int k, n, w, sum = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        sum += k * i;
    }

    int dollerNeed;
    if (sum > n)
    {
        dollerNeed = sum - n;
        cout<<dollerNeed;
    }
    else {
        cout<<0;
    }

    return 0;
}