#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   int h1; cin >> h1;
   int ans = -1;
   for(int i=1; i<n; i++){
    int h; cin >> h;
    if(h>h1){
        ans=i+1;
        break;
    }
   }
   cout << ans << endl;
   
   return 0;
}