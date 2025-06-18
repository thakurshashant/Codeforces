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
 
#define ll long long
 
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
 
void solve() {
    string s, t;
    cin>>s;
    cin>> t;

    int n = s.size(), m = t.size();
    vector<vector<int> > freq_s(26);
    vector<int> freq_t(26);

    for(int i=0;i<n;i++){
        int idx = s[i] - 'A';
        freq_s[idx].push_back(i);
    }

    for(int i=0;i<m;i++){
        int idx = t[i] - 'A';
        freq_t[idx]++;
    }

    int cur = -1;
    for(int i=0;i<m;i++){
        int freq = freq_t[t[i]-'A'];

        if(freq > freq_s[t[i]-'A'].size()){
            cout<<"NO"<<endl;
            return ;
        }

        vector<int> temp = freq_s[t[i]-'A'];

        int x = temp.size(), j = x-freq;
        
        if(j < n && temp[j] < cur){
            cout<<"NO"<<endl;
            return ;
        }
        else if(j<n && temp[j] >= cur) cur = temp[j];
        else {
            cout<<"NO"<<endl;
            return ;
        }    
        freq_t[t[i]-'A']--;

    }

    cout<<"YES"<<endl;
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}