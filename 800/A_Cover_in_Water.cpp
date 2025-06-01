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
        int n;
        cin>> n;

        string s;
        cin>>s; 
        int ans = 0, temp = 0,total =0;

        for(int i=0; i<n;i++){
            if(s[i] == '.'){
                temp++;
                total++;
            }
            else{
                ans = max(ans, temp);
                temp =0;
            }
        }
        ans = max(ans, temp); 

        if(ans >= 3) cout<< 2;
        else{
            cout<<total;
        }
        cout<<endl;
    };

    return 0;
}