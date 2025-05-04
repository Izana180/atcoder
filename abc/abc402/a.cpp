#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >>s;
    for(int i=0; i<s.length(); i++){
        if('A'<=s[i]&&s[i]<='Z'){
            cout << s[i];
        }
    }
    cout << endl;
    
    return 0;
}
