#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int T; cin >> T;
   vector<long> A(5);
   vector<long> P(5);
   for(int i=0; i<5; i++){
    int a; cin >> a;
    A[i]=a;
   }
   for(int i=0; i<5; i++){
    int p; cin >> p;
    P[i]=p;
   }

   int point_sum,point_count,point_ave;
   for(int i=0; i<5; i++){
    point_sum+=A[i]*(i+1);
    point_count+=A[i];
    point_ave=point_sum/point_count;
   }
   


   
   return 0;
}