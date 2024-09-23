#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int W; int B; cin >> W >> B;
   int set=(W+B)/12;
   if(set*7>W||set*5>B){
    cout << "No" << endl;
   }
   else{
    int rem_w=W-set*7; int rem_b=B-set*5;
    if((rem_w==0&&rem_b==0)||(rem_w==1&&rem_b==0)||(rem_w==1&&rem_b==1)||(rem_w==2&&rem_b==1)||(rem_w==2&&rem_b==2)||(rem_w==3&&rem_b==2)||(rem_w==4&&rem_b==2)||(rem_w==4&&rem_b==3)||(rem_w==5&&rem_b==3)||(rem_w==5&&rem_b==4)||(rem_w==6&&rem_b==4)||(rem_w==6&&rem_b==5)||(rem_w==7&&rem_b==5)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
   }

   return 0;
}