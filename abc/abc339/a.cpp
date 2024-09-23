#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s; cin >> s;
   int op_start=0;
   for(int i=0; i<s.length(); i++){
    if(s[i]=='.') op_start=i+1;
   }
   for(int i=op_start; i<s.length(); i++){
    cout << s[i];
   }
   cout << endl;
   
   return 0;
}