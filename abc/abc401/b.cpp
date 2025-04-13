#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<string> s(n);
    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    bool isLogin=false;
    int errCount=0;
    for(int i=0; i<n; i++){
        if(s[i]=="login")
            isLogin=true;
        if(s[i]=="logout")
            isLogin=false;
        if(s[i]=="private"&&!isLogin){
            errCount++;
        }
    }
    cout << errCount << endl;
    return 0;
}
