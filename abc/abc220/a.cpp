#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b,c; cin >> a >> b >> c;
   if(((a/c)+1)*c<b){
    cout << ((a/c)+1)*c << endl;
   }
   else if ((a/c)*c==a){
    cout << (a/c)*c << endl;
   }
   else{
    cout << "-1" << endl;
   }
   
   return 0;
}