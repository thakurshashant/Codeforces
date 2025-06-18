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
    int n;

    cin>>n;
    string s;
    cin>>s;

    int temp1 = 0, max1 =0, max2= 0, temp2=0;
    for(int i=0;i<n;i++){
        if(s[i] == '<'){
            temp1++;
            max2 = max(max2 , temp2);
            temp2 =0;
        }
        else{
            temp2++;
            max1 = max(max1, temp1);
            temp1= 0;
        }
    }
    max1 =max(max1, temp1);
    max2 = max(max2 , temp2);
    cout<<max(max1, max2)+1<<endl;
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}