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


// typedef long long ll;
// typedef tuple <int, int, int> t;
// typedef pair<int, int> p;
// typedef vector<int> v;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n , k , x;
        cin >> n >> k >> x;

        if(k == 1){
            cout<<"NO"<<endl;
            continue;
        }
        else if(x != 1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 0; i < n; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if( k == 2){
            if(n&1) cout<<"NO"<<endl;
            else{
                cout<<"YES"<<endl;
                cout<<n/2<<endl;
                for(int i = 0; i < n/2; i++){
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            vector<int> ans;
            while(n > 0){
                if(n&1){
                    ans.push_back(3);
                    n-=3;
                }
                else{
                    ans.push_back(2);
                    n-=2;
                }
            }
            cout<<ans.size()<<endl;
            for(int i = 0; i < ans.size(); i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;

        }
        
    }

    return 0;
}
