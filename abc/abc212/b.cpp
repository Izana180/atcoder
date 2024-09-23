#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string passcode; cin >> passcode;
   bool aaaa = true;
   bool abcd = true;
   for(int i=1; i<4; i++){
    if(passcode[i]!=passcode[0]){
        aaaa=false;
    }
   }
   for(int i=0; i<3; i++){
    if(((passcode[i]+1)%10)!=(passcode[i+1]%10)){
        abcd=false;
    }
   }
   if(aaaa||abcd){
    cout << "Weak" << endl;
   }
   else{
    cout << "Strong" << endl;
   }
   

   
   return 0;
}