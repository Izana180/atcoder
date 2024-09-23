#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string N; cin >> N;
   while(N.length()<4){
    N.insert(0,"0");
   }
   cout << N << endl;
   
   return 0;
}