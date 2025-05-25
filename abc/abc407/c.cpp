#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int ans=0;
    int shift=0;
    while(!s.empty()){
        int back = (s.back() - '0' + shift) % 10;
        if(back != 0){
            shift = (shift + 10 - back) % 10;
            ans += back;
        }
        s.pop_back();
        ans++;
    }
    cout << ans << endl;
    return 0;
}
