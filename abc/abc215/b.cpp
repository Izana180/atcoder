#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long N; cin >> N;
   int count=0;
   for(long long i=1; i<=1e18; i*=2){
   if(i<=N){
    count ++;
   }
   }
   cout << count-1 << endl;
   
   return 0;
}