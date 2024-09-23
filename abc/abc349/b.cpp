#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s; cin >> s;
   int counter[26]={0};
   for(int i=0; i<s.length(); i++){
    counter[int(s[i]-'a')]++;
   }
   bool judge=true;
   for(int i=0; i<26; i++){
    int count=0;
    if(counter[i]!=0){
       for(int j=0; j<26; j++){
        if(counter[i]==counter[j]) count++;
       }
       if(count!=2) judge=false;
    }
   }

   if(judge) cout<< "Yes" << endl;
   else cout << "No" << endl;

   return 0;
}