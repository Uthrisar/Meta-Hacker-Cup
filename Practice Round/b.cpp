#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    double N, P;
    cin >> N >> P;
    P /= 100;
    double P_new = pow(P,(N-1)/N);
    double increase = (P_new-P)*100;
    if(increase < 0) increase = 0.0;
    cout << fixed << setprecision(12) << increase;
}

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        cout << "Case #" << i << ": ";
        solve();
        if (i != T) cout << endl;
    }
}
