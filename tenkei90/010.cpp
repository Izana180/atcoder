// 20250417
// 010-ScoreSumQueries(★2)

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // どう見ても累積和
    int n; cin >> n;
    vector<int> c(n);
    vector<int> p(n);
    for(int i=0; i<n; i++){
        cin >> c[i];
        cin >> p[i];
    }

    vector<int> preSum1(n,0);
    vector<int> preSum2(n,0);
    (c[0]==1) ? preSum1[0]=p[0] : preSum2[0]=p[0];
    for(int i=1; i<n; i++){
        preSum1[i]=preSum1[i-1];
        preSum2[i]=preSum2[i-1];
        if(c[i]==1) preSum1[i]+=p[i];
        if(c[i]==2) preSum2[i]+=p[i];
    }

    int q; cin >> q;
    for(int i=0; i<q; i++){
        int a,b; cin >> a >> b;
        a--; b--;
        cout << preSum1[b]-preSum1[a-1] << " ";
        cout << preSum2[b]-preSum2[a-1] << endl;
    }
    return 0;
}
