#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    string getSolution(string name)
    {
        int count = 0;
        sort(name.begin(), name.end());
        for (int i = 0; i < name.size(); i++)
        {
            if (name[i] != name[i + 1])
            {
                count++;
            }
        }
        if (count % 2 == 0)
        {
            cout << "CHAT WITH HER!";
        }
        else
        {
            cout << "IGNORE HIM!";
        }
    }
};

int main()
{
    string name;
    cin >> name;
    Solution solution;
    solution.getSolution(name);
    return 0;
}