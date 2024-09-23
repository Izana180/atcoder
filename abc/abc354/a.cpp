#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int h; cin >> h;
   int i=0;
   while(true){
    if(pow(2,i)-1>h){
        cout << i;
        break;
    }
    i++;
   }
   cout << endl;
   
   return 0;
}