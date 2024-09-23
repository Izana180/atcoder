#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, m;
   cin >> n >> m;
   vector<int> A(n);
   vector<int> B(m);
   for(int i=0; i<n; i++) {
      cin >> A[i];
   }
   for(int i=0; i<m; i++) {
      cin >> B[i];
   }

   sort(A.begin(), A.end());
   sort(B.begin(), B.end());

   char belong = ' ';
   bool judge = false;
   for(int i=0; i<201; i++) {
      char tmp = ' ';
      for(int j=0; j<n; j++) {
         if(A[j]==i+1) {
            tmp='A';
            break;
         }
      }
      for(int h=0; h<m; h++) {
         if(B[h]==i+1) {
            tmp='B';
            break;
         }
      }
      if(tmp==belong && belong!='A') {
         judge=true;
         break;
      }
      belong=tmp;
   }

   if(judge) cout << "Yes" << endl;
   else cout << "No" << endl;

   return 0;
}