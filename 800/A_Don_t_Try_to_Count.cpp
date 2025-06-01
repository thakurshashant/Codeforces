typedef long long ll;
typedef tuple <int, int, int> t;
typedef pair<int, int> p;


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
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int count = 0;
        string temp = x;

        bool found = false;

        while(temp.find(s) == string::npos){
            if(count > 6) {
                cout << -1 << endl;
                found = true;
                break;
            }
            count++;
            temp = temp + temp;
        }

        if(!found && temp.find(s) != string::npos)
            cout << count << endl;
    }

    return 0;
}
