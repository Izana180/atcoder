#include <bits/stdc++.h>
using namespace std;
typedef long long Int;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int n;

vector<string> query1(vector<string> &grid){
    vector<string> output(n, string(n,'.'));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            output[j][n-1-i]=grid[i][j];
        }
   }
   return output;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    vector<string> s(n), t(n);
    for(int i=0; i<n; i++)
        cin >> s[i];
    for(int i=0; i<n; i++)
        cin >> t[i];
    int minimum = INT32_MAX;

    vector<string> rotated = s;

    for(int i=0; i<4; i++){
        int flips=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(rotated[i][j] != t[i][j])
                    flips++;
            }
        }
        int cand=i+flips;
        minimum = min(minimum, cand);
        rotated = query1(rotated);
    }
    cout << minimum << endl;
    return 0;
}