#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y; cin >> x >> y;
    int count = 0;
    for(int i=1; i<=6; i++){
        for(int j=1; j<=6; j++){
            if(i+j>=x || i-j>=y || j-i>=y) count ++;
        }
    }
    cout << fixed << setprecision(30) << (double)count/36 << endl;
    return 0;
}