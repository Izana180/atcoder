#include <iostream>
#include <vector>
using namespace std;

int main(){
    // 二次元の累積和
    // まず全体を累積和で表す
    // 2,0,0,5,1          2,2,2,7,8
    // 1,0,3,0,0          3,3,6,11,12
    // 0,8,5,0,2    ->    3,11,19,24,27
    // 4,1,0,0,6          7,16,24,29,38
    // 0,9,2,7,0          7,25,35,47,56
    // ある領域の累積和は、領域の左上+右下-右上-左下で求まる
    // (累積和が累積している領域を考えると分かりやすい)

    int h,w;
    cin >> h >> w;
    vector<vector<int>> x(h, vector<int>(w,0));
    vector<vector<int>> dSum(h, vector<int>(w,0));
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> x[i][j];
        }
    }
    for(int i=0; i<h; i++){
        int tmpSum=0;
        for(int j=0; j<w; j++){
            tmpSum+=x[i][j];
            dSum[i][j]=tmpSum;
        }
    }
    for(int i=0; i<w; i++){
        int tmpSum=0;
        for(int j=0; j<h; j++){
            tmpSum+=dSum[j][i];
            dSum[j][i]=tmpSum;
        }
    }

    int q; cin >> q;
    for(int i=0; i<q; i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        // 最初からバッファ取ったでかい固定長配列用意すれば条件判定不要
        cout << ((a>1&&b>1) ? dSum[a-2][b-2] : 0)+dSum[c-1][d-1]-((a>1) ? dSum[a-2][d-1] : 0)-((b>0) ? dSum[c-1][b-2] : 0) << endl;
    }

    return 0;
}
