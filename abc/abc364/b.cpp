#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void calcPosition(int &x, int &y, int xRange, int yRange, string action, const vector<string>& map){
    for(char c:action){
        if(c=='U'&&(x!=1&&map[x-2][y-1]!='#')){
            x--;
            // cout << "U " << x << y << endl;
        }
        if(c=='D'&&(x!=xRange&&map[x][y-1]!='#')){
            x++;
            // cout << "D " << x << y << endl;
        }
        if(c=='L'&&(y!=1&&map[x-1][y-2]!='#')){
            y--;
            // cout << "L " << x << y << endl;
        }
        if(c=='R'&&(y!=yRange&&map[x-1][y]!='#')){
            y++;
            // cout << "R " << x << y << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,xRange,yRange;
    cin >> xRange >> yRange >> x >> y;
    vector<string> map(xRange);
    for(int i=0;i<xRange;i++){
        cin >> map[i];
    }
    string action;
    cin >> action;

    calcPosition(x,y,xRange,yRange,action,map);

    cout << x << " " << y << endl;
    return 0;
}