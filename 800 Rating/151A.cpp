#include "bits/stdc++.h"
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np, drinks, limes, salt;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    drinks = (k*l)/nl;
    limes = c*d;
    salt = p/np;

    cout<<(min(min(drinks,limes), salt))/n;

    return 0;
}