#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string a="abc";
   string b= "axbxcx";
   b.erase(b.find(a[1]));
   cout << b;
   return 0;
}