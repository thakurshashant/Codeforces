#include<iostream>
#include<set>
#include<map>
#include<string>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<bitset>
#include<list>
#include<utility>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


using ll = long long;
using tup =  tuple <int, int, int> ;
using pp =  pair <int, int> ;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2;
        set<pair<int, int>> st1, st2;

        vector<int> dx = {1, -1, 1, -1};
        vector<int> dy = {1, -1, -1, 1};

        for(int j = 0; j < 4; j++){
            st1.insert({x1+dx[j]*a, y1+dy[j]*b});
            st2.insert({x2+dx[j]*a, y2+dy[j]*b});
            st1.insert({x1+dx[j]*b, y1+dy[j]*a});
            st2.insert({x2+dx[j]*b, y2+dy[j]*a});
        }
        int ans = 0;
        for(auto x : st1)
            if(st2.find(x) != st2.end())
                ans++;
        cout << ans << '\n';    
    }

    return 0;
}

