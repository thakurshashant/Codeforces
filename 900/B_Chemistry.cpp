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


#define long long ll;
#define tuple <int, int, int> t;
#define pair <int, int> p;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, t;
        cin >> n>>t;

        string s;
        cin>>s;

        vector<int> freq(26, 0);
        for(int i=0;i<n;i++){
            freq[s[i] - 'a']++;
        }

        int odd =0;
        for(int i=0;i<26;i++){
            if(freq[i] &1){
                odd++;
            }
        }

        if(odd > 1 && t <= 0) cout<<"NO";
        else if(odd - t > 1) cout<<"NO";
        else cout<<"YES";
        
        cout<<endl;
    }

    return 0;
}
