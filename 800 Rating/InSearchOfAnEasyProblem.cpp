#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, sum = 0;
    cin>>n;
    int opinion[n];

    for (int i = 0; i < n; i++)
    {
        cin>>opinion[i];
        sum += opinion[i];
    }
    if(sum > 0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }

    return 0;
}