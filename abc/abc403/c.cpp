#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,q; cin >> n >> m >> q;
    vector<unordered_set<int>> users(n+1);
    vector<bool> admin(n+1, false);

    for(int i=0; i<q; i++){
        int queryType; cin >> queryType;
        if(queryType==1){
            int x,y; cin >> x >> y;
            if(!admin[x])
                users[x].insert(y);
        }
        if(queryType==2){
            int x; cin >> x;
            admin[x]=true;
        }
        if(queryType==3){
            int x,y; cin >> x >> y;
            if(admin[x] || users[x].count(y))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
