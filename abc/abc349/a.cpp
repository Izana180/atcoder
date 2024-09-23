#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   int sum=0;
   for(int i=0; i<n-1; i++){
    int a; cin >> a;
    sum+=a;
   }
   cout << 0-sum <<endl;
   
   return 0;
}