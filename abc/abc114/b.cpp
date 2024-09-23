#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
  int sol_min=1000;
  
  int S_digit=S.size();
  for(int i=0; i<S_digit-2; i++){
    int candidate_min ((int(S[i]-'0'))*100 + (int(S[i+1]-'0'))*10 + (int(S[i+2]-'0')));
    sol_min=min(sol_min, abs(753-candidate_min));
    }
  cout << sol_min << endl;
  return 0;
}