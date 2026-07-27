#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    const int a[]={1,2,3,4,5};
    int p[n];
    p[0]=a[0];
    for (int i=1;i<n;i++) {
        p[i]=p[i-1]+a[i];
    }
    for (int i=0;i<n;i++) {
        cout<<p[i]<<" ";
    }

    int q;cin>>q;
    while (q--) {
        int l,r;
        cin>>l>>r;
        if (l!=0) {
            cout<<p[r]-p[l-1]<<endl;
        }
        else {
            cout<<p[r]<<endl;
        }
    }
    return 0;
}