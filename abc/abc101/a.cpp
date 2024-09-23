#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int image;
  image = 0;
  string S;
  cin >> S;

  int i = 0;
  while(i < 4){
    if (S.at(i) == '+'){
      i ++;
      image ++;
    }
    else if (S.at(i) == '-'){
      i ++;
      image --;
    }
  }
  cout << image << endl;
  return 0;
}