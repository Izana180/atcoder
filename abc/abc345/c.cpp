#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string S; cin >> S;
  int count = 0;

  for(int i=0; i<S.length(); i++){
    for(int j=i+1; j<S.length(); j++){
        if(S[i]!=S[j]){
            count ++;
        }
    }
  }
  
  if(count==0){
    count ++;
  }

  cout << count << endl;
  return 0;
}