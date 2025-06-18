#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

#define all(v) v.begin(), v.end()

int getMaxAfterOps(vector<vector<int>>& v, bool rowFirst) {
    int n = v.size(), m = v[0].size();
    int maxi = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            maxi = max(maxi, v[i][j]);

    if(rowFirst) {
        unordered_map<int, int> rowFreq;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(v[i][j] == maxi) rowFreq[i]++;

        int maxRow = -1, maxRowFreq = 0;
        for(auto& [r, cnt] : rowFreq)
            if(cnt > maxRowFreq) maxRow = r, maxRowFreq = cnt;

        if(maxRow != -1) {
            for(int j = 0; j < m; j++)
                if(v[maxRow][j] == maxi) v[maxRow][j]--;
        }

        unordered_map<int, int> colFreq;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(v[i][j] == maxi) colFreq[j]++;

        int maxCol = -1, maxColFreq = 0;
        for(auto& [c, cnt] : colFreq)
            if(cnt > maxColFreq) maxCol = c, maxColFreq = cnt;

        if(maxCol != -1) {
            for(int i = 0; i < n; i++)
                if(v[i][maxCol] == maxi) v[i][maxCol]--;
        }

    } else {
        unordered_map<int, int> colFreq;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(v[i][j] == maxi) colFreq[j]++;

        int maxCol = -1, maxColFreq = 0;
        for(auto& [c, cnt] : colFreq)
            if(cnt > maxColFreq) maxCol = c, maxColFreq = cnt;

        if(maxCol != -1) {
            for(int i = 0; i < n; i++)
                if(v[i][maxCol] == maxi) v[i][maxCol]--;
        }

        unordered_map<int, int> rowFreq;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(v[i][j] == maxi) rowFreq[i]++;

        int maxRow = -1, maxRowFreq = 0;
        for(auto& [r, cnt] : rowFreq)
            if(cnt > maxRowFreq) maxRow = r, maxRowFreq = cnt;

        if(maxRow != -1) {
            for(int j = 0; j < m; j++)
                if(v[maxRow][j] == maxi) v[maxRow][j]--;
        }
    }

    int newMax = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            newMax = max(newMax, v[i][j]);

    return newMax;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int> > v(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    vector<vector<int>> copy1 = v, copy2 = v;

    int ans1 = getMaxAfterOps(copy1, true);   
    int ans2 = getMaxAfterOps(copy2, false); 

    cout << min(ans1, ans2) << endl;
}


int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
}
