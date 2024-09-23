#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int countA=0;
   int countB=0;
   for(int i=0; i<9; i++){
    int a ; cin >> a;
    countA+=a;
   }
   for(int i=0; i<8; i++){
    int b; cin >> b;
    countB+=b;
   }
   cout << countA-countB+1 << endl;
   
   return 0;
}