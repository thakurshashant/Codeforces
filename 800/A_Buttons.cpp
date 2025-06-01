// typedef long long ll;
// typedef tuple <int, int, int> t;
// typedef pair<int, int> p;
// typedef vector<int> v;

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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int total = a + b + c;

        if(a > b){
            cout<<"First";
        }
        else if(a < b){
            cout<<"Second";
        }
        else{
            if(c&1){
                cout<<"First";
            }
            else cout<<"Second";
        }


        cout<<endl;
    }

    return 0;
}
