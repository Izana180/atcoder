#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t;
    cin >> n >> t;

    vector<int> rows(n), cols(n), xxx(2);
    int count=0;

    for (int i=0; i<t; i++) {
        int a;
        cin >> a;
        int row=(a-1)/n;
        int col=(a-1)%n;

        rows[row]++;
        cols[col]++;
        if (row==col) xxx[0]++;
        if (row+col==n-1) xxx[1]++;

        if (rows[row]==n) count++;
        if (cols[col]==n) count++;
        if (xxx[0]==n) count++;
        if (xxx[1]==n) count++;

        if (count>0) {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << "-1" << endl;
    return 0;
}
