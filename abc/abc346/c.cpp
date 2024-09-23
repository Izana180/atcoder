#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   long long N; long long K;
   cin >> N >> K;
   vector<long long> A(N);
   for(long long i=0; i<N; i++){
    long long a; cin >> a;
    A[i]=a;
   }
   sort(A.begin(),A.end());
   A.erase(unique(A.begin(),A.end()),A.end());
   long long sum=(1+K)*K/2;
   for(long long i=0; i<A.size(); i++){
    if(A[i]<=K){
        sum-=A[i];
    }
   }
   cout << sum << endl;
   
   return 0;
}