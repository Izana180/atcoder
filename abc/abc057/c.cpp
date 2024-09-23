#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  for(int i = round(sqrt(N)); i >= 1; i --){
    if(N % i == 0){
      int B = N / i;
      string B_str(to_string(B));
      cout << B_str.length() << endl;
      break;
    }
  }
  return 0;
}