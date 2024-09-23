#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   double Z; cin >> Z;
   int X=Z;
   int Y=(Z-X)*10;
   if(0<=Y&&Y<=2){
    cout << to_string(X)+'-' << endl;
   }
   else if(3<=Y&&Y<=6){
    cout << X << endl;
   }
   else{
    cout << to_string(X)+'+' << endl;
   }

   return 0;
}