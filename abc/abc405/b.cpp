#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    map<int, int> count;
    for(int i=0; i<n; i++){
        count[a[i]]++;
    }

    for(int i=1; i<=m; i++){
        if(count[i]==0){
            cout << "0" << endl;
            return 0;
        }
    }

    int ans=0;
    bool flag=true;
    for(int i=n-1; i>=0; i--){\
        count[a[i]]--;
        ans++;
        for(int j=1; j<=m; j++){
            if(count[j]==0){
                flag=false;
                break;
            }
        }

        if(!flag){
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}
