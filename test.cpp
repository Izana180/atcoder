#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s; cin >> s;
  bool judge=true;
  if(s[0]!='A'||s[1]!='B'||s[2]!='C') judge=false;
  if(stoi(s.substr(3))<=0||stoi(s.substr(3))>349||stoi(s.substr(3))==316) judge=false;

  if(judge) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}