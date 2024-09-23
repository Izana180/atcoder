#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b; cin >> a >> b;
   cout << static_cast<int>(pow(32,(a-b))) << endl; //int型にキャストするの忘れずに
   
   return 0;
}