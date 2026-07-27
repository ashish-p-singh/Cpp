#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> a,int target) {
    int l=0,r=a.size()-1;
    while (l<=r) {
        int m=(l+r)/2;
        if (a[m]==target)
            return true;
        if (a[m]>target)
            l=m+1;
        if (a[m]<target)
            r=m-1;
    }
    return false;
}
int main() {

    return 0;
}