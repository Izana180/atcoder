#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;

    vector<vector<bool>> bingo(N, vector<bool>(N, false));

    for (int i = 0; i < T; ++i) {
        int Ai;
        cin >> Ai;

        // Aiがビンゴカード上のどの位置にあるかを探す
        int row = (Ai - 1) / N;
        int col = (Ai - 1) % N;

        // マスに印をつける
        bingo[row][col] = true;

        // 各行、各列、および対角線を調べる
        bool bingo_flag = false;
        for (int j = 0; j < N; ++j) {
            // 各行を調べる
            bool row_bingo = true;
            for (int k = 0; k < N; ++k) {
                if (!bingo[j][k]) {
                    row_bingo = false;
                    break;
                }
            }
            if (row_bingo) {
                bingo_flag = true;
                break;
            }

            // 各列を調べる
            bool col_bingo = true;
            for (int k = 0; k < N; ++k) {
                if (!bingo[k][j]) {
                    col_bingo = false;
                    break;
                }
            }
            if (col_bingo) {
                bingo_flag = true;
                break;
            }
        }

        // 対角線を調べる
        bool diagonal_bingo1 = true;
        bool diagonal_bingo2 = true;
        for (int j = 0; j < N; ++j) {
            if (!bingo[j][j]) {
                diagonal_bingo1 = false;
            }
            if (!bingo[j][N - 1 - j]) {
                diagonal_bingo2 = false;
            }
        }
        if (diagonal_bingo1 || diagonal_bingo2) {
            bingo_flag = true;
        }

        if (bingo_flag) {
            cout << i + 1 << endl; // ビンゴが達成されたターン数を出力
            return 0;
        }
    }

    // ビンゴが達成されなかった場合
    cout << -1 << endl;
    return 0;
}
