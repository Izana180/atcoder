#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    // 愚直解 TLE
    int l,r;
    int sum=0;
    for(int i=0; i<q; i++){
        cin >> l >> r;
        for(int j=l-1; j<r; j++){
            sum+=a[j];
        }
        cout << sum << '\n';
        sum = 0;
    }
    return 0;
}
