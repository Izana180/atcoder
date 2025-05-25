#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int h,w;
vector<vector<long long>> a;
vector<bool> isUsed;
long long maxXor=0;

int index(int i, int j){
    return i * w + j;
}

void dfs(int pos){
    if(pos == h*w){
        long long xorSum=0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                int idx=index(i,j);
                if(!isUsed[idx])
                    xorSum ^= a[i][j];
            }
        }
        maxXor = max(maxXor, xorSum);
        return;
    }

    int i = pos/w;
    int j = pos%w;
    int idx = index(i,j);

    if(isUsed[idx]){
        dfs(pos+1);
        return;
    }

    dfs(pos+1);
    if(j+1<w&&!isUsed[index(i,j+1)]){
        isUsed[idx] = isUsed[index(i,j+1)]=true;
        dfs(pos+1);
        isUsed[idx] = isUsed[index(i,j+1)]=false;
    }
    if(i+1<h&&!isUsed[index(i+1,j)]){
        isUsed[idx] = isUsed[index(i+1,j)]=true;
        dfs(pos+1);
        isUsed[idx] = isUsed[index(i+1,j)]=false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> h >> w;
    a.resize(h, vector<long long>(w));
    isUsed.resize(h*w, false);
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> a[i][j];
        }
    }
    dfs(0);
    cout << maxXor << endl;
    return 0;
}
