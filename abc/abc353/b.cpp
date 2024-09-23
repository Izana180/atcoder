#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,k; cin >> n >> k;
   vector<int> A(n);
   for(int i=0; i<n; i++){
    cin >> A[i];
   }

   int rem=k;
   int ans=0;
   for(int i=0; i<n; i++){
    if(A[i]>rem){
        rem=k;
        ans++;
    }
    if(A[i]<=rem){
        rem-=A[i];
    }
   }
   cout << ans+1 << endl;
   
   return 0;
}