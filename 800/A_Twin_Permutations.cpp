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
    
        vector<int> arr(n) , b(n);
        for(int i =0; i< n;i++){
            cin >> arr[i];
        }   

        int x = n;
        for(int i=n-2 ;i >=0 ; i--){
            if(arr[i] > arr[i+1]){
                b[i-1] = arr[i];
                b[i] = arr[i+1];

            }
        }

        for(int i=0;i<n;i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
