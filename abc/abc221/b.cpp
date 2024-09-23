#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S, T;
  cin >> S >> T;
  string judge = "No";
  for(int i=0; i < S.size(); i++){
    if(S==T){
      judge = "Yes";
    }
    else if(S[i]!=T[i]){
      swap(S[i],S[i+1]);
      if (S==T){
        judge = "Yes";
      }
      swap(S[i],S[i+1]);
    }
  }
  cout << judge << endl;
  
  return 0;
}