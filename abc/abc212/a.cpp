#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b; cin >> a >> b;
   if(a>0&&b==0){
    cout << "Gold" << endl;
   }
   else if(a==0&&b>0){
    cout << "Silver" << endl;
   }
   else if(0<a&&0<b){
    cout << "Alloy" << endl;
   }
   return 0;
}