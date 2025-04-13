#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

const int MOD=1000000000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k; cin >> n >> k;

    vector<Int> fib(n+3,0);
    vector<Int> dp(n+2,0);
    for(int i=0; i<k&&i<=n; i++){
        dp[i]=1;
        fib[i+1]=(fib[i]+dp[i])%MOD;
    }
    for(int i=k; i<=n; i++){
        dp[i]=(fib[i]-fib[i-k]+MOD) % MOD;
        fib[i+1]=(fib[i]+dp[i])%MOD;
    }

    cout << dp[n] << endl;
    return 0;
}
