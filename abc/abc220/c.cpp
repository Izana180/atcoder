#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   vector<long> A(n);
   long long seg_sum=0;
   for(int i=0; i<n; i++){
    cin >> A[i];
    seg_sum+=A[i];
   }
   long long x; cin >> x;
   long long sum_surp=x%seg_sum;
   long long sum=0;
   long long surp=0;
   int i=0;
   while(sum<=sum_surp){
    sum+=A[i];
    i++;
    surp++;
   }

   cout << ((x/seg_sum)*n)+surp << endl;

   return 0;
}