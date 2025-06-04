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
#include<numeric>

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
 
        bool beautiful = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 1) beautiful =true; 
        }
 
        if(beautiful) cout<<"YES";
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i == j) continue;
                    
                    if(gcd(a[i] , a[j]) <= 2) {
                        beautiful =true;
                        break;
                    }
                }
            }
            if(beautiful) cout<<"YES";
            else cout<<"NO";
        }   
        cout<<endl;
    }

    return 0;
}
