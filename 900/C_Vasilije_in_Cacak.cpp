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


// using ll = long long ;
// using tu = tuple <int, int, int> ;
// using pa = pair <int, int>;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        long long n, k ,x;
        cin >> n >> k >> x;

        long long mini =0, maxi =0;

        if(n < k) cout<<"NO";
        else{
            mini = (k * (k + 1)) / 2;
            while(k--){
                maxi += n;
                n--;
            }

            if(x >= mini &&  x <= maxi){
                cout <<"YES";
            }
            else{
                cout<<"NO";
            }
        } 


        cout<<endl;
    }

    return 0;
}
