#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int N,M; cin >> N >> M;
   vector<int>A(N);
   vector<int>B(M);
   int min_1=0; int min_2=0;

   for(int i=0;i<N; i++){
    cin >> A[i];
   }
   for(int i=0;i<M; i++){
    cin >> B[i];
   }

   min_1=min_element(A.begin(),A.end())-max_element(B.begin(),B.end());
   if(min_1<0){
    min_1*=(-1);
   }
   min_2=min_element(B.begin(),B.end())-max_element(A.begin(),A.end());
   if(min_2<0){
    min_2*=(-1);
   }
   
   if(min_1>min_2){
    cout << min_2 <<endl;
   }
   else{
    cout << min_1 <<endl;
   }
   return 0;
}