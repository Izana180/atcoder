#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t,u; cin >> t >> u;

    for(int i=0; i<=t.length()-u.length(); i++){
        bool isValid=true;
        int count=0;
        for(int j=0; j<u.length(); j++){
            if(t[i+j]=='?')
                count++;
            else if(t[i+j]!=u[j]){
                isValid=false;
                break;
            }
        }
        if(isValid&&count<=4){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
