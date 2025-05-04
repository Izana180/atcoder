#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<bool> used(26, false);
    string s; cin >>s;
    for(char c : s){
        used[c-'a']=true;
    }

    for(int i=0; i<26; i++){
        if(!used[i]){
            cout << char('a'+i) << endl;
            return 0;
        }
    }
}