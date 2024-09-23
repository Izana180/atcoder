//TLE
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long N; cin >> N;
   long long count=1;
   long long after_mul=2;
   cout << 'A';
   while(after_mul<N){
    count *= 2;
    after_mul *= 2;
    cout << 'B';
   }
   if(count!=N){
    while(count<N){
        count++;
        cout << 'A';
    }
   }
   else{
    cout << endl;
   }
   
   return 0;
}