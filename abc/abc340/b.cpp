#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int q; cin >> q;
   vector<int> A;
   for(int i=0; i<q; i++){
    int type,value; cin >> type >> value;
    if(type==1) A.push_back(value);
    else cout << A[A.size()-value] << endl;
   }
   
   return 0;
}