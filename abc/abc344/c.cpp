#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n; cin >> n;
   vector<int> A(n);
   for(int i=0; i<n; i++) cin >> A[i];
   int m; cin >> m;
   vector<int> B(m);
   for(int i=0; i<m; i++) cin >> B[i];
   int l; cin >> l;
   vector<int> C(l);
   for(int i=0; i<l; i++) cin >> C[i];

   vector<int> sum;
   for(int j=0; j<n; j++){
    for(int k=0; k<m; k++){
        for(int i=0; i<l; i++){
            sum.push_back(A[j]+B[k]+C[i]);
        }
    }
   }

   int q; cin >> q;
   vector<int> X(q);
   for(int i=0; i<q; i++){
    cin >> X[i];
   }
   for(int i=0; i<q; i++){
    if(find(sum.begin(),sum.end(),X[i])!=sum.end()){
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;
   }
   
   return 0;
}
