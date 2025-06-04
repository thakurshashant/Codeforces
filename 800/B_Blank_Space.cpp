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
    
        vector<int> arr(n);
        for(int i =0; i< n;i++){
            cin >> arr[i];
        }

        int maxi = 0, temp =0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                temp++;
            }
            else{
                maxi = max(maxi, temp);
                temp = 0;
            }
        }
        maxi = max(maxi, temp);
        cout << maxi << endl;
    }

    return 0;
}
