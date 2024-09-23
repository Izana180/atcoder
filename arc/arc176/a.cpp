#include <bits/stdc++.h>
using namespace std;
typedef long long Int;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int squ,target_sum; cin >> squ >> target_sum;
   vector<int> x(target_sum);
   vector<int> y(target_sum);
   for(int i=0; i<target_sum; i++){
    int a,b; cin >> a >> b;
    x[i]=a;
    y[i]=b;
   }

   vector<string> added;
   int add_count=0;
   for(int i=1; i<=squ; i++){
    int row_sum;
    row_sum=count(x.begin(),x.end(),i);
    for(int j=1; j<=squ; j++){
        int line_sum;
        line_sum=count(y.begin(),y.end(),j);
        if(line_sum!=target_sum){
            x.push_back(i);
            y.push_back(j);
            row_sum++;
            add_count++;
            added.push_back(to_string(i)+' '+to_string(j));
        }
        if(row_sum==target_sum) break;
    }
   }

   cout << add_count << endl;
   for(string s:added){
    cout << s << endl;
   }



   return 0;
}