#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int N; cin >> N;
   vector<int> P(N);
   vector<int> spoon(N);
   for(int i=0; i<N; i++){
    int p; cin >> p;
    P[i]=p;
    spoon[i]=i+1;
   }
   string S; cin >> S;
   
   
   return 0;
}