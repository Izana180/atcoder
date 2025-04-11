// WA ongoing

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int> > a(n, vector<int>(3));
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    vector<vector<int> > dp(n+1,vector<int>(3,0));
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                if(j==k) continue;
                // TODO: dpの更新できてない？
                dp[i+1][k]=max(dp[i+1][k],(dp[i][j]+dp[i][k]));
            }
        }
    }

    long long output=0;
    for(int i=0; i<3; i++)
        output=max(output, (long long)dp[n][i]);
    cout << output << endl;
}