#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input
    string s; cin >> s;
    long L = s.size();

    double ans = 0;
    for(int i=0; i<26; i++){
        char c = 'a'+i;
        long sum = f(L);
        long prev = -1;
        for(int j=0; j<L; j++){
            if(s[j]==c){
                sum -= f(j - prev - 1);
                prev = j;
            }
        }
        sum -= f(L - prev - 1);
        ans += sum;
    }
    cout << ans << endl;
    
    return 0;
}