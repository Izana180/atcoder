#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,q; cin >> n >> q;
   vector<int> v;
   
   for(int i=1; i<n+1; i++){
    v.push_back(i);
   }
   for(int i=0; i<q; i++){
    int t; cin >> t;
    auto result = find(v.begin(), v.end(), t);
    if (result == v.end()) {
        v.push_back(t);
        //cout << " a";
    }
    else{
        v.erase(remove(v.begin(),v.end(),t),cend(v));
        //cout << " b";
    }
   }
//    for(auto i:v){
//     cout<<i;
//    }

   
   cout << v.size() << endl;

   
   return 0;
}