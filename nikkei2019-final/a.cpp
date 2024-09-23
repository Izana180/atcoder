#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<long long> A(n);
   for(int i=0; i<n; i++) cin >> A[i];
   vector<long long> sum(n+1);
   for(int i=0; i<n; i++){
    sum[i+1]=sum[i]+A[i];
   }
   for(int k=1; k<=n; k++){
    long long ans=0;
    for(int i=0; i+k<=n; i++){
        ans=max(ans, sum[i+k]-sum[i]);
    }
    cout << ans << endl;
   }

   return 0;
}