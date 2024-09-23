#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long x; cin >> x;
  if(x%10==0||x<0){
    long long ans = x/10;
    cout << ans << endl;
  }
  else{
    long long cand_ans = x/10;
    cout << cand_ans+1 << endl;
  }

  return 0;
}