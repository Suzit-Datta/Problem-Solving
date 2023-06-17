#include "bits/stdc++.h"
using namespace std;

int main()
{
    int num, digit, n, rev = 0;
    cin >> num;
    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    if(rev == n){
        cout<<"Number is a palindrom";
    }
    else {
        cout<<"the number is not a palindrom";
    }

    return 0;
}