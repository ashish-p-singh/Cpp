#include <bits/stdc++.h>
using namespace std;
void factorize_prime(int n) {
    for (int i=2;i*i<=n;i++) {
        while (n%i==0) {
            cout<<i<<endl;
            n/=i;
        }
    }
    if (n!=1) {
        cout<<n<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    factorize_prime(n);
    return 0;
}