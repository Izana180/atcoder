// 20250415
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int d; cin >> d;

    vector<int> l(d);
    vector<int> r(d);
    for(int i=0; i<d; i++){
        cin >> l[i] >> r[i];
        l[i]--;
        r[i]--;
    }
    vector<int> leftMax(n);
    vector<int> rightMax(n);
    leftMax[0]=a[0];
    for(int i=1; i<n; i++){
        leftMax[i]=max(leftMax[i-1], a[i]);
    }
    rightMax[n-1]=a[n-1];
    for(int i=n-2; i>=0; i++){
        rightMax[i]=max(rightMax[i+1],a[i]);
    }

    for(int i=0; i<d; i++){
        int left=(l[i]>=1) ? leftMax[l[i]-1] : 0;
        int right=(r[i]<n-1) ? rightMax[r[i]+1] : 0;
        cout << max(left,right) << endl;
    }
}