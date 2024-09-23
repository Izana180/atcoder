#include <bits/stdc++.h>
using namespace std;
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> numbers;
  int A;
  while(cin >> A){
    numbers.push_back(A);
  }
  reverse(begin(numbers), end(numbers));
  for(int i=0; i<numbers.size(); i++){
    cout << numbers[i] << endl;
  }
}