#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int m;
   cin >> m;
   vector<int> output;
   int i=0;
   while(m!=0){
    while(m%3!=0){
        m--;
        output.push_back(i);
    }
    m/=3;
    i++;
   }

   cout << output.size() << endl;
   for(int a:output){
    cout << a << ' ';
   }
   cout << endl;
   
   return 0;
}