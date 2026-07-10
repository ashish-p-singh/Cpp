#include <iostream>
using namespace std;
int main() {
    int a[10]={2,5,2,5,2,5,4,5,24};
    cout << "Hello array!" << endl;
    for (auto  &i : a) {
       cin>>i;
    }
    cout<<"\n";
    for (auto i : a) {
        cout<<i<<" ";
    }
    return 0;
}