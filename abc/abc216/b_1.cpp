#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int N; cin >> N;
   vector<string> S(N),T(N);
   bool exist_dup=false;
   for(int i=0; i<N; i++){
    cin >> S[i] >> T[i];
   }
   for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        if(i!=j&&(S[i]==S[j]&&T[i]==T[j])){
            exist_dup=true;
        }
    }
   }

   if(exist_dup){
    cout << "Yes" << endl;
   }
   else{
    cout << "No" << endl;
   }
   
   return 0;
}