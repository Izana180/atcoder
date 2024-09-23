#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   vector<char> L;
   for(char z='a'; z<='z'; z++){
       L.push_back(z);
   }
   for(int i=0; i<26; i++){
    int P; cin >> P;
    cout << L[P-1];
   }
   cout << endl;

   return 0;
}