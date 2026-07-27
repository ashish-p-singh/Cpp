#include <bits/stdc++.h>
using namespace std;
int n;
map<int, int> prev_values;

int query(int index) {
    if (prev_values.contains(index)) {
        return prev_values[index];
    }
    if ((index == 0) || (index == n + 1))
        return INT_MAX >> 2;

    cout << "? " << index << endl;
    int value;
    cin >> value;
    return prev_values[index] = value;
}

int main() {
    cin >> n;
    int l = 0, r = n+1;


    while (l<r-1) {
        int mid=(l+r)/2;
        (query(mid-1) > query(mid))?(l=mid):(r=mid);
    }
    cout<<"! "<<l<<endl;
        return 0;
}
