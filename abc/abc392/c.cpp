#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

typedef struct{
    int name;
    int zekken;
    int sight;
} man;

int main(){
    int n; cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    for(int i=0; i<n; i++) cin >> p[i];
    for(int i=0; i<n; i++) cin >> q[i];

    vector<man> manInsight(n);
    unordered_map<int, int> zekkenToName;
    for(int i=0; i<n; i++){
        manInsight[i].name=i;
        manInsight[i].zekken=q[i];
        manInsight[i].sight=p[i];
        zekkenToName[q[i]]=i;
    }
    sort(manInsight.begin(), manInsight.end(), [](man &a, man&b){return a.zekken<b.zekken;});

    for(int i=1; i<=n; i++){
        int wearerIndex = zekkenToName[i]; // ゼッケン i を着ている人
        int seenIndex = manInsight[wearerIndex].sight; // 見ている人の index
        cout << manInsight[seenIndex].zekken << endl;
    }
    return 0;
}