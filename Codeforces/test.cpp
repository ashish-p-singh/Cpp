#include <bits/stdc++.h>
using namespace std;
int sumOdd(vector <int>arr) {
    int n=arr.size();
    int sum=0;
    int n1=n;
    for (int i=0;i<n;i++) {
        int p[n];
        p[0]=arr[i];
        sum+=p[0];
        for (int j=i+1;j<n1;j++) {
            p[j-i]=p[j-i-1]+arr[j];
        }
        for (int k=2;k<n1;k+=2) {
            sum+=p[k];
        }
        n1--;

    }
    return sum;
}

int main() {
    vector<int> arr = {1,4,2,5,3};
    cout<<sumOdd(arr);
}