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
        string s;
        cin>> s;
 
        int l=0, r=n-1;
 
        while(l < r){
            if(s[l] == s[r]){
                break;
            }   
            else{
                l++;
                r--;
            }
        }
        cout<<r-l+1<<endl;
    }

    return 0;
}
