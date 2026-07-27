#include <iostream>
using namespace std;
void sieve(int n) {
    bool primes[n+1];
    fill((primes),primes+n,true);
    primes[0]=primes[1]=false;
    for (int i=2;i<=n;i++) {
        if (primes[i]) {
            for (int j=i*2;j<=n;j+=i) {
                primes[j]=false;
            }
        }
    }
    
}
int main() {
    int n;
    cin>>n;
    sieve(n) ;
    return 0;
}