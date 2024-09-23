#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<int> A(n);
   for(int i=0; i<n; i++) cin >> A[i];
   long long cand_min=0;
   long long sum=0;
   for(int i=0; i<n; i++){
    sum+=A[i];
    if(sum<cand_min) cand_min = sum;
   }
   cout << sum-cand_min << endl;

   return 0;
}