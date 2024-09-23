//avoid double loop
#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s,t; cin >> s >> t;
   int j=0;
   for(int i=0; i<t.length(); i++){
      if(t[i]==s[j]){
         cout << i+1 << ' ';
         j++;
      }
   }
   cout << endl;
   return 0;
}