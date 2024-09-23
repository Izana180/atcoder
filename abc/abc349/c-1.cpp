#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

//is code?
bool judge(string s,string t){
   cout << s.find(t);
   if(s.find(t)!=-1) return true;
   else return false;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s,t; cin >> s >> t;
   //to lower
   for(int i=0; i<3; i++){
      t[i]+=32;
   }
   bool is_code=false;
   if(t[2]=='x'){
      string top2=t.erase(t.length()-1,1);
      is_code=judge(s,top2);
   }
   else{
      is_code=judge(s,t);
   }

   if(is_code) cout << "Yes" << endl;
   else cout << "No" << endl;
   return 0;
}