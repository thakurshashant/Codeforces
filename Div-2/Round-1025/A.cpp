#include<iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == 1) count++;
    }

    if (count == n) {
        cout << "YES" << "\n";
        return;
    }

    for (int i = 0; i < n - 1; i++) if (!a[i] && !a[i + 1]) {
        cout << "YES" << "\n";
        return;
    }

    cout << "NO" << "\n";
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}