#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long N; cin >> N;
   long P[N]={};
   for(long i=0; i<N; i++){
    long p;
    cin >> p;
    P[i]=p;
   }

   long Q[N]={};
   for(long i=0; i<N; i++){
    Q[P[i]-1]=i+1;
   }
   for(long i=0; i<N; i++){
    cout << Q[i] << ' ';
   }
   
   return 0;
}