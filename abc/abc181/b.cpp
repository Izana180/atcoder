#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   long long sum=0;
   for(int i=1; i<=n; i++){
    long long a,b; cin >> a >> b;
    sum+=(a+b)*(b-a+1)/2;
   }
   cout << sum << endl;
   
   return 0;
}