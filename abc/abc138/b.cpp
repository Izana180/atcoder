#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   double sum=0;
   for(int i=0; i<n; i++){
    double a; cin >> a;
    sum += 1/a;
   }
   cout << fixed << setprecision(15);
   cout << 1/sum << endl;
   return 0;
}