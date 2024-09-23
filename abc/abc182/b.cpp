#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int N; cin >> N;
   vector<int> A(N);
   for(int i=0; i<N; i++){
    int a; cin >> a;
    A[i]=a;
   }
   int count=0; int L_GCD=1;
   for(int i=1000; i>=2; i--){
    int tmp=0;
    for(int j=0; j<N; j++){
        if(A[j]%i==0){
            tmp++;
        }
    }
    if(tmp>count){
        count=tmp;
        L_GCD=i;
    }
   }
   cout << L_GCD << endl;
   return 0;
}