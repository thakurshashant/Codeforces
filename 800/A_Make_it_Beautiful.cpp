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
        cin>>n;
        vector<int> a(n);
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        sort(a.begin(), a.end());
 
        if(a[0] == a[n-1]) cout<<"NO";
        else{
            cout<<"YES"<<endl;
            cout<<a[n-1]<<" ";
 
            for(int i=0;i<n-1;i++) cout<<a[i]<<" ";
 
        }
        cout<<endl;
    }

    return 0;
}
