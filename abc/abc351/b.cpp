#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<string> gridA(n);
   vector<string> gridB(n);
   for(int i=0; i<n; i++){
      cin >> gridA[i];
   }
   for(int i=0; i<n; i++){
      cin >> gridB[i];
   }

   int ansi,ansj;
   for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
         if(gridA[i][j]!=gridB[i][j]){
            ansi=i+1;
            ansj=j+1;
         } 
      }
   }
   cout << ansi << ' ' << ansj << endl;

   
   return 0;
}