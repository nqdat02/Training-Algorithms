#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, ok = 1, k = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            a[i] %= b[i] + 1;
            k ^= a[i];
        }
        if (k == 0)
            cout << "Second\n";
        else
            cout << "First\n";
    }
}