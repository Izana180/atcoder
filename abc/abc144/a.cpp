#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  bool flag = false;
  for(int i=1; i<=9; i++){
    if(N % i == 0 && N / i <= 9){
      flag = true;
      cout << "Yes" << endl;
      break;
    }
  } 
  if (flag == false){
    cout << "No" << endl;
  }
  
  return 0;
}