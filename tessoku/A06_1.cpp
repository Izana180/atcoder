#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    int a;
    vector<int> sum(n+1);
    for(int i=1; i<=n; i++){
        cin >> a;
        sum[i]=sum[i-1]+a;
    }

    int l,r;
    for(int i=0; i<q; i++){
        cin >> l >> r;
        cout << sum[r]-sum[l-1] << endl;
    }
    return 0;
}
