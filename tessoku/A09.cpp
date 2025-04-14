// 20250415
// 二次元のImos法
// Imos法-> 同じ値を加算する処理を何回もするようなとき、始点に+1,終点に-1を設置しておいて最後に累積和を取る
// +1 +1
// +1 +1 を再現したいとき

// +1 0 -1
//  0 0  0
// -1 0 +1 のように記録して累積和取る

// +1 +1 0
//  0  0 0
// -1 -1 0 まず横方向

// +1 +1 0
// +1 +1 0
//  0  0 0 縦方向すると結果同じ

// 愚直に加算すると最悪領域全体(H*W)に+1する、をN回なのでO(H*N*W)
// Imos法使えばImos作るのにO(N)、累積和の計算にO(H*W)なのでO(N+H*W)で済む

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int h,w,n; cin >> h >> w >> n;
    // Imos(始点終点のindex)
    vector<vector<int>> Imos(h+1,vector<int>(w+1,0));
    for(int i=0; i<n; i++){
        int a,b,c,d; cin >> a >> b >> c >> d;
        Imos[a-1][b-1]++;
        Imos[c][d]++;
        Imos[a-1][d]--;
        Imos[c][b-1]--;
    }
    vector<vector<int>> Algo(h+1,vector<int>(w+1,0));
    // 横方向の累積和
    for(int i=0; i<h; i++){
        int tmpSum=0;
        for(int j=0; j<w; j++){
            tmpSum+=Imos[i][j];
            Algo[i][j]=tmpSum;
        }
    }

    // 縦方向の累積和
    for(int i=0; i<w; i++){
        for(int j=1; j<h; j++){
            Algo[j][i]+=Algo[j-1][i];
        }
    }


    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout << Algo[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
