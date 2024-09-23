#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string a;
  cin>>a;
  int sum=0;
  for(int i=0; i<3; i++){
    int a_i=a[i]-'0';
    sum+=a_i;
  }
  cout<<sum<<endl;
  return 0;
}