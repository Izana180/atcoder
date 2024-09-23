#include <iostream>
#include <string>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s; cin >> s;
  int patern = (s.length()*(s.length()-1))/2;
  for(long i=0; i<s.length(); i++){
    for(long j=i+1; j<s.length(); j++){
        if(s[i]==s[j]){
            patern --;
        }
    }
  }

  if(patern==0){
    patern ++;
  }
  cout << patern << endl;

  return 0;
}