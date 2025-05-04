#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

class UnionFind {
    public:
        vector<int> parent;
    
        UnionFind(int n) {
            parent.resize(n + 1);
            for (int i = 1; i <= n; ++i) parent[i] = i;
        }
    
        int find(int x) {
            if (parent[x] == x) return x;
            return parent[x] = find(parent[x]);
        }
    
        bool unite(int x, int y) {
            int px = find(x), py = find(y);
            if (px == py) return false;
            parent[py] = px;
            return true;
        }
    };

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m; cin >> n >> m;
    if(n!=m){
        cout << "No" << endl;
        return 0;
    }

    vector<int> degCount(n,0);
    UnionFind uf(n);

    for(int i=0; i<n; i++){
        int a,b; cin >> a >> b;
        a--; b--;
        degCount[a]++;
        degCount[b]++;
        uf.unite(a,b);
    }

    for(int i=0; i<n; i++){
        if(degCount[i]!=2){
            cout << "No" << endl;
            return 0;
        }
    }

    int root = uf.find(0);
    for(int i=1; i<n; i++){
        if(uf.find(i)!=root){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
