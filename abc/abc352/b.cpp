#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s,t; cin >> s >> t;
   vector<int> ans;
   for(int i=0; i<s.length(); i++){
    for(int j=0; j<t.length(); j++){
        if(s[i]==t[j]){
            auto itr=find(ans.begin(),ans.end(),j+1);
            if(itr==ans.end()){
                ans.push_back(j+1);
            }
        }
    }
   }
   for(int i=0; i<ans.size(); i++){
        cout << ans[i] << ' ';
    }
   
   return 0;
}