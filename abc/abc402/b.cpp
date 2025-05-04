#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q; cin >> q;
    queue<int> line;
    for(int i=0; i<q; i++){
        int queryType; cin >> queryType;
        if(queryType==1){
            int x; cin >> x;
            line.push(x);
        }
        else{
            cout << line.front() << endl;
            line.pop();
        }
    }

    return 0;
}
