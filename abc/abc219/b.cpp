#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   vector<string> S(3);
   for(int i=0; i<3; i++){
    string s; cin >> s;
    S[i]=s;
   }
   string T; cin >> T;
   for(int i=0; i<T.length(); i++){
    cout << S[(T[i]-'0')-1];
   }
   cout << endl;
   
   return 0;
}