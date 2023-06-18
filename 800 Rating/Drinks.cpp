#include "bits/stdc++.h"
using namespace std;

int main() {
    int n, drinkNum, totalDrink = 0;
    cin>>n;
    vector<int> drinks;

    for (int i = 0; i < n; i++)
    {
        cin>>drinkNum;
        drinks.push_back(drinkNum);
        totalDrink += drinks[i];
    }
    double volumeFraction = (double)totalDrink/n;

    cout<< setprecision(12) <<volumeFraction;

    return 0;
}