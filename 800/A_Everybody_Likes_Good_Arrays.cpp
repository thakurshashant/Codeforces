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
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i=0;i<n;i++) cin >> a[i];
 
        int  temp_odd=0, temp_even =0;
        bool x= false, b =false;
        for(int i=1;i<n;i++){
            if(a[i]&1    && a[i-1]&1){
                temp_odd++;
                b = true;
            }
            else if(!(a[i]&1) && !(a[i-1]&1)){
                temp_even++;
                x = true;
            }
        }
        if(!x && !b){
            cout<<0;
        }
        else if(!x && b){
            cout<<temp_odd;
        }
        else if(x && !b) cout<<temp_even;
        else cout<<temp_even+temp_odd;
        cout<<endl;
    }

    return 0;
}
