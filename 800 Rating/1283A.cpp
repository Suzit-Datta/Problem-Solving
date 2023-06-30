#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int h,m, hour, minute;
        cin>>h>>m;

        hour = 23 - h;
        minute = 60 - m;
        minute += (hour * 60);
        cout<<minute<<endl;
    }
    
    return 0;
}