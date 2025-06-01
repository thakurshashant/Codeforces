typedef long long ll;

#include<iostream>
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
        int n, k;
        cin >> n;
        cin >> k;
    
        int count = 0;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        for(int i=1;i<n;i++){
           if(a[i] < a[i-1]) count++;
        }
        if(k <= 1 && count >= 1){
            cout << "NO";
        }
        else cout<<"YES";
        cout << endl;
    };

    return 0;
}



// 1 - if the array is already sorted, then no need
// 2 - if the array is not sorted, then if k == 1 never possible
// 3 - if k > 1, then we can always sort it (  by taking 2 elements at a time and swapping them indefinitely)
