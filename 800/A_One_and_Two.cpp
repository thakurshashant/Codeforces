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
 
        int total =0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 2) total++;
        }
 
        int curr =0 , answer =-1;
        for(int i=0;i<n;i++){
            if(a[i] == 2){
                curr++;
                total--;
            }
            if(curr == total) {
                answer= i+1;
                break;
            }
            
        }
        cout << ((answer == -1) ? -1 : answer) << endl;
    }

    return 0;
}
