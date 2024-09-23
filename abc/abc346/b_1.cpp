#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string S;
   while(S.length()<200){
    S+="wbwbwwbwbwbw";
   }
   int W; int B; cin >> W >> B;
   int sum=W+B;
   bool flag = false;
   for(int i=0;i<12;i++){
    int w_count=0; int b_count=0;
    for(int j=0;j<sum;j++){
        if(S[i+j]=='w'){
            w_count++;
        }
        if(S[i+j]=='b'){
            b_count++;
        }
    }
    if(w_count==W&&b_count==B){
        flag = true;
        break;
    }
   }
   if(flag){
    cout << "Yes" << endl;
   }
   else{
    cout << "No" << endl;
   }

   
   return 0;
}