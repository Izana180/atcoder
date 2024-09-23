#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n,x,y,z;
   cin >> n >> x >> y >> z;
   if(x<y){
    cout << ((x<z&&z<y)?"Yes":"No") << endl;
   }
   else cout << ((y<z&&z<x)?"Yes":"No") << endl;
   
   return 0;
}