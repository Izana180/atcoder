#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
  int length = S.length();
  int wrong =0;
  for(int i=0; i<length; i++)
  {
    if(S[0]!=S[1]){
      if(S[1]==S[2]){
        wrong = 1;
      }
      else{
        wrong = 2;
      }
    }
    else if(S[i]!=S[i+1])
    {
      wrong=i+2;
      break;
    }
  }
  cout << wrong << endl;
  return 0;
}