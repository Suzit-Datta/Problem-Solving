#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int getSolution(int n, int k)
    {
        int result = 0;
        for (int i = 0; i < k; i++)
        {
            if (n % 10 == 0)
            {
                if (n != 1)
                    n = n / 10;
            }
            else
            {
                n -= 1;
            }
            if (n == 1)
            {
                break;
            }
        }
        return n;
    }
};

int main()
{
    int n, k;
    cin >> n >> k;
    Solution solution;
    cout << solution.getSolution(n, k);
    return 0;
}