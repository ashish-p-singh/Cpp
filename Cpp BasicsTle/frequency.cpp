#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char,int> mp;
    int maxi=0;
    string s="ashish";
    for (auto c:s) {
        mp[c]++;
        maxi=max(maxi,mp[c]);
    }
    for (auto c:s) {
        if (mp[c]==maxi) {
            cout<<c;
        }
    }
    return 0;
}