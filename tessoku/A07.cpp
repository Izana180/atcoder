#include <iostream>
#include <vector>
using namespace std;

int main(){
    // d日間のイベント n人出席
    // イベントの参加期間が与えられるので、各日の参加人数を出力
    // 各日の増減を配列で保持
    // 参加人数は、この累積和で表せる

    int d,n;
    cin >> d >> n;
    vector<int> upDown(d,0);

    for(int i=0; i<n; i++){
        int l,r;
        cin >> l >> r;
        upDown[l-1]++;
        upDown[r]--;
    }
    int sum=0;
    for(int i=0; i<d; i++){
        sum+=upDown[i];
        cout << sum << endl;
    }
    return 0;
}
