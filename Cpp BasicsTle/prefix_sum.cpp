#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[]={1,2,3,4,5};
    //Method 1
    // int p[n],sum=0;
    //     for (int i=0;i<n;i++) {
    //         sum+=a[i];
    //         p[i]=sum;
    //     }
    //Method 2
    int p[n];
    p[0]=a[0];
    for (int i=1;i<n;i++) {
        p[i]=p[i-1]+a[i];
    }
    for (int i=0;i<n;i++) {
        cout<<p[i]<<" ";
    }
    return 0;
}