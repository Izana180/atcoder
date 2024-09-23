//WA,TLE 2^N+Zが最小手数とは限らない
#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long N; cin >> N;
   long long ball_count=1;
   int A_count=0; int B_count=0;
   cout << 'A';
   for(long long i=1; i<1e18; i*=2){
    if(i<=N){
        B_count++;
        ball_count=i;
    }
   }
   for(int i=0; i<B_count-1; i++){
    cout << 'B';
   }

   if(ball_count!=N){
    A_count=N-ball_count;
    for(int i=0; i<A_count; i++){
        cout << 'A';
    }
   }
   cout << endl;

   return 0;
}