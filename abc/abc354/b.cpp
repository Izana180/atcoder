#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n; cin >> n;
   map<string,int> rating;
   int sum=0;
   for(int i=0; i<n; i++){
    string s; int c;
    cin >> s >> c;
    sum+=c;
    rating[s]=c;
   }

   int winner=sum%n;
   auto i=next(rating.begin(),(winner));
   cout << i->first << endl;

   
   return 0;
}