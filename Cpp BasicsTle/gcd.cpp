#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
    if (a==0)
    return b;
    else
    return gcd(b%a,b);
}
int main() {
    cout<<gcd(100,25);
    return 0;
}