#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   vector<string> list={"ABC","ARC","AGC","AHC"};
   for(int i=0; i<3; i++){
    string S; cin >> S;
    remove(list.begin(),list.end(),S);
   }
   cout << list[0] << endl;

   return 0;
}