#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   for(int i=0; i<=n; i++){
    for(int j=0; j<=n; j++){
        for(int k=0; k<=n; k++){
            if(i+j+k<=n){
                cout << i << ' ' << j << ' ' << k << endl;
            }
        }
    }
   }
   
   return 0;
}