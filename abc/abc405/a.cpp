#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int r,x; cin >> r >> x;
    if(x==1){
        if(1600<=r&&r<=2999){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    else{
        if(1200<=r&&r<=2399){
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    return 0;
}