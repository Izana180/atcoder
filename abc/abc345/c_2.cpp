#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  map<char, long> count;
  string S; cin >> S;
  for(char z='a'; z<='z'; z++){
    for(int i=0; i<S.length(); i++){
        if(S[i]==z){
            count[z]++;
        }
    }
  }
  
  bool exist_dup = false;
  long ans= (S.length()*(S.length()-1))/2;
  for(char z='a'; z<='z'; z++){
    if(count[z]>=2){
        exist_dup=true;
        ans-=(count[z]*(count[z]-1))/2;
    }
  }
  if(exist_dup){
    ans++;
  }

  cout << ans << endl;
  return 0;
}