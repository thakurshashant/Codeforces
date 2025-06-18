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


// using ll =  long long;
// using tu = tuple <int, int, int>;
// using p = pair <int, int>;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        long long n;
        cin>>n;
        
        int i =1;
        while(n%i == 0) i++;
        cout<<i-1;
        cout<<endl;
    }

    return 0;
}
