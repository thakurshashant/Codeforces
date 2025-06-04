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
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n , a, b;

        cin>> n>>a>>b;
        if(a == n && b == n) cout<<"YES";
        else if((a == n && b != n ) ||(a != n && b == n)) cout<<"NO";
        else{
            if(n - (a+b)  <= 1) cout<<"NO";
            else cout<<"YES";
        }
        cout<<endl;
    }
    return 0;
}