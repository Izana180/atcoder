#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string x){
  int low = 0;
  int high = x.length()-1;
  while(low<high){
    if(x[low]!=x[high]){
      return false;
    }
    low++;
    high--;
  }
  return true;
}

int main() {
  long N;
  cin >> N;
  double max_double = cbrt(N);
  long max = max_double+1;
  string ans;
  for(long i=max; i>0; i--){
    long cand_ans=i*i*i;
    if(cand_ans<=N){
      if(is_palindrome(to_string(cand_ans))){
        ans = to_string(cand_ans);
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}