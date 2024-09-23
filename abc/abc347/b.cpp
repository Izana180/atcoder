#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > calcNext(const string &S) {
    int n = (int)S.size();
    vector<vector<int> > res(n+1, vector<int>(26, n));
    for (int i = n-1; i >= 0; --i) {
        for (int j = 0; j < 26; ++j) res[i][j] = res[i+1][j];
        res[i][S[i]-'a'] = i;
    }
    return res;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s; cin >> s;
   vector<vector<int>> next=calcNext(s);
   
   vector<long> dp(s.size()+1, 0);
   dp[0]=1;
   for(int i=0; i<s.size(); i++){
    for(int j=0; j<26; j++){
        if(next[i][j]>=s.size()) continue;
        dp[next[i][j]+1]+=dp[i];
    }
   }

   long ans=0;
   for(int i=0; i<=s.size(); i++) ans+=dp[i];
   cout << ans-1 << endl;
   return 0;
}