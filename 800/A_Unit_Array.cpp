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

        int sum =0 , product = 1;
    
        vector<int> arr(n);
        for(int i =0; i< n;i++){
            cin >> arr[i];
            sum += arr[i];
            product *= arr[i];
        }

        if(sum >= 0){
            if(product == 1) cout<<0;
            else cout<< 1;
        }
        else{
            int diff = abs(sum);
            if(diff < 2) cout<< 1;
            else cout<<diff;
        }
        cout << endl;
    }

    return 0;
}
