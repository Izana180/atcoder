#include <bits/stdc++.h>
using namespace std;
typedef long long Int;


const int inf=1<<30;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<int> h(n);
   for (int i=0;i<n;i++){
      cin >> h[i];
   }

   int dp[n];
   for(int i=0; i<n; i++){
      dp[i]=inf;
   }
   dp[0]=0;
   for(int i=1; i<n; i++){
      dp[i]=min(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
      if(i<=2) dp[i]=min(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
   }
   cout << dp[n-1] << endl;
   return 0;
}