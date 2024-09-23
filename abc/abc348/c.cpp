#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   struct AC{
    Int a;
    Int c;
   };
   int n; cin >> n;
   vector<AC> beans(n);
   for(int i=1; i<=n; i++){
    cin >> beans[i].a >> beans[i].c;
   }
   
   auto cmp = [&](AC x, AC y) -> bool {
    if (x.a > y.a) return true;
    else if (x.a == y.a && x.c > y.c)
        return true;
    else
        return false;
    };
    stable_sort(beans.begin(), beans.end(), cmp);

    for(AC b:beans){
        cout << b.a << ' ' << b.c << endl;
    }
   return 0;
}