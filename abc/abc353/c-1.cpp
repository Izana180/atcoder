#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   const Int base=100000000;
   int n; cin >> n;
   vector<Int> A(n);
   for(int i=0; i<n; i++){
    cin >> A[i];
   }
   Int ans=0;
   for(int i=0; i<n; i++){
    ans+=A[i];
   }
   ans*=n-1;

   int count =0;
   for(int i=0; i<n; i++){
    if(A[i]>=base/2){
        
    }
   }
   cout << count << endl;
   cout << ans-(base*count);
   
   return 0;
}