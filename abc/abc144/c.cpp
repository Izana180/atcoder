#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin >> N;
  for(int i = round(sqrt(N)); i >= 1; i--){
    if(N % i == 0){
      cout << i + (N / i) - 2 << endl;
      break;
    }
  }
  return 0;
}