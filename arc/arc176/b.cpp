#include <bits/stdc++.h>
using namespace std;
typedef long long Int;


int ones_place(Int x){
    int mod4;
    mod4=x%4;
    if(mod4==0) return 6;
    if(mod4==1) return 2;
    if(mod4==2) return 4;
    if(mod4==3) return 8;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t; cin >> t;
   for(int i=0; i<t; i++){
    Int n,m,k; cin >> n >> m >> k;
   }
   
   return 0;
}