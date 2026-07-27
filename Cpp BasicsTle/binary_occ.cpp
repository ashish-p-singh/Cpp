#include <bits/stdc++.h>
using namespace std;
int search_last(vector<int> a,int target) {
    int l=0,r=a.size()-1;
    while (l<r) {
        int m=(l+r+1)/2;
        if (a[m]>target)
            l=m;
        if (a[m]<target)
            r=m-1;
    }
    return a[l]==target?l:-1;
}

int search_first(vector<int> a,int target) {
    int l=0,r=a.size()-1;
    while (l<r) {
        int m=(l+r)/2;
        if (a[m]>target)
            l=m+1;
        if (a[m]<target)
            r=m;
    }
    return a[l]==target?l:-1;
}
int main() {
    return 0;
}