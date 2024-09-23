#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int N; cin >> N;
   vector<vector<string>> name(N);
   for(int i=0; i<N; i++){
    string First; string Last;
    cin >> First >> Last;
    name[i][0]=First; name[i][1]=Last;   
    }

   bool exist_dup=false;
   for(int i=0; i<N; i++){
      for(int j=i+1; j<N; j++){
       if(name[i][0]+name[i][1]==name[j][0]+name[j][1]){
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