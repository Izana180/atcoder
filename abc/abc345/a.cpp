#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string S; cin >> S;
  bool is_arrow = true;
  if(S[0]!='<'||S[S.length()-1]!='>'){
    is_arrow = false;
  }
  for(int i=1; i<S.length()-1; i++){
    if(S[i]!='='){
        is_arrow = false;
    }
  }

  if(is_arrow){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }

  return 0;
}