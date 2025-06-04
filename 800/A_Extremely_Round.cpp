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
        int n;
        cin>>n;

        if(n <= 9) cout<<n;
        else if(n > 9 && n <= 100){
            cout<< 9 + (n/10);
        }
        else if(n > 100 && n <= 1000){
            cout<< 18 + (n/100);
        }
        else if(n > 1000 && n < 10000){
            cout<< 27+(n/1000);
        }
        else if(n >= 10000 && n < 100000){
            cout<< 36 + (n/10000);
        }
        else if(n >= 100000 && n <  1000000){
            cout<< 45 + (n/100000);
        }
        cout<<endl;
    }
    return 0;
}