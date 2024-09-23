#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,q; string s;
   cin >> n >> s >> q;
   string from,to;
   from = to = "abcdefghijklmnopqrstuvwxyz";

   for(int i=0; i<q; i++){
    char c,d; cin >> c >> d;
    for(auto &m:to){
        if(m==c) m=d;
    }
   }

   for(auto c:s){
    for(int i=0; i<26; i++){
        if(c==from[i]) cout << to[i];
    }
   }
   cout << endl;
   
   return 0;
}