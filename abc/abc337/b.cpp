#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s; cin >> s;
   bool judge=true;
   for(int i=0; i<s.length()-1; i++){
    if(int(s[i]-'A')>int(s[i+1]-'A')) judge=false;
   }
   if(judge) cout << "Yes" << endl;
   else cout << "No" << endl;
   
   return 0;
}