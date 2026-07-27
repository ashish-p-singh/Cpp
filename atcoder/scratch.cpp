#include <bits/stdc++.h>
using namespace std;
int main() {
   int a[]={1,7,3,6,5,6};
   int n=sizeof(a)/sizeof(a[0]);
   int p[n];
   p[0]=a[0];
   for (int i=1;i<n;i++) {
      p[i]=p[i-1]+a[i];
   }
   for (int i=0;i<n;i++) {
      int l1=0;
      int r1=i-1;
      int l2=i+1;
      int r2=n-1;
      if (i!=0) {
         int left=p[r1];
         int right=(i==n-1)?0:p[r2]-p[l2-1];
         if (left==right) {
            return i;
         }
      }
      else {
         int left=0;
         int right=(i==n-1)?0:p[r2]-p[l2-1];
         if (left==right) {
            return i;
         }
      }
   }
   return -1;
}