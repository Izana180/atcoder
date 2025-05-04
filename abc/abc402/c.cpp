#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin >> n >> m;

    vector< vector<int> > element(m);
    vector< vector<int> > includeFood(n+1);
    vector<int> count(m,0);

    // 逆引き
    for(int i=0; i<m; i++){
        int k; cin >> k;
        element[i].resize(k);
        for(int j=0; j<k; j++){
            int ele; cin >> ele;
            element[i][j]=ele;
            includeFood[ele].push_back(i);
            count[i]++;
        }
    }

    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    vector<bool> isFoodEatable(m,false);
    int output=0;
    for(int i=0; i<n; i++){
        int eatableElement=b[i];
         for(int j : includeFood[eatableElement]){
            if(isFoodEatable[j])
                continue;
            count[j]--;
            if(count[j]==0){
                isFoodEatable[j]=true;
                output++;
            }
        }
        cout << output << endl;
    }

    return 0;
}
