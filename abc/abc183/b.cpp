#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   double sx,sy,gx,gy;
   cin >> sx >> sy >> gx >> gy;
   double slp=(sy+gy)/(gx-sx);
   cout << fixed << setprecision(10);
   cout << sy/slp+sx << endl;
   
   return 0;
}