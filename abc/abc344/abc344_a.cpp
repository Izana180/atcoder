#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int first_bar = 0;
  int second_bar = 0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='|'){
      first_bar=i;
      break;
    }
  }
  for(int i=0; i<first_bar; i++){
    cout << s[i];
  }
  for(int i=first_bar+1; i<s.length(); i++){
    if(s[i]=='|'){
      second_bar = i;
      break;
    }
  }
  for(int i=second_bar+1; i<s.length(); i++){
    cout << s[i];
  }
  cout << endl;

  return 0;
}
