#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,k; cin >> n >> k;
   vector<int> A(n);
   for(int i=0; i<n; i++){
    cin >> A[i];
   }
   for(int i=0; i<n; i++){
    if(A[i]%k==0){
        cout << A[i]/k << ' ';
    }
   }
   cout << endl;
   
   return 0;
}