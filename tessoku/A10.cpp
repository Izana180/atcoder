// 20250415
// 累積和-> 要素nの配列に対してn-1個の配列を作るのではなく、0番目の要素を0として要素
// つぎから

// 左から見た時の累積和と右から見た時の累積和を記録しておいて、
// 使用不可の部屋を挟んだ左側の最大と右側の最大を比較して出力する

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
    vector<int> rightMax(n,0);


    leftMax[0]=a[0];
    for(int i=1; i<n; i++){
        leftMax[i]=max(leftMax[i-1], a[i]);
    }
    rightMax[n-1]=a[n-1];
    for(int i=n-2; i>0; i--){
        rightMax[i]=max(rightMax[i+1],a[i]);
    }

    for(int i=0; i<d; i++){
        int left=(l[i]>=1) ? leftMax[l[i]-1] : 0;
        int right=(r[i]<n-1) ? rightMax[r[i]+1] : 0;
        cout << max(left,right) << endl;
    }
}
