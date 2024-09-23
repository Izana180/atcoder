#include <bits/stdc++.h>
using namespace std;

string to_bin(int N){
    string ans;
    while(N>0){
        char d='0'+(N%2);
        ans+=d;
        N/=2;
    }
    return ans;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int A,B; cin >> A >> B;
   string bin_A=to_bin(A); string bin_B=to_bin(B);
   string bin_C;
   for(int i=0; i<8; i++){
    if(bin_B[i]==0){
        
    }
   }


   
   return 0;
}