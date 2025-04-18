#include <iostream>
using namespace std;

const long long INF = 1LL << 60;

long long h[100010];
long long dp[100010];

int main(){
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> h[i];
    }
    for(int i=0; i<100010; i++){
        dp[i]=INF;
    }

    dp[0]=0;
    dp[1]=abs(h[1]-h[0]);
    for(int i=2; i<n; i++){
        dp[i]=min((dp[i-2]+abs(h[i]-h[i-2])),(dp[i-1]+abs(h[i]-h[i-1])));
    }
    cout << dp[n-1] << endl;
}
