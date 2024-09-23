#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int N; ll K;
    cin >> N >> K;
    vector<int> S(N);
    for(int i=0; i<N; i++) cin >> S[i];
    sort(S.begin(),S.end());
    ll tot_time = 0;
    tot_time = (N-1)*2LL*S[0];
    tot_time -= S[0];
    if(N == 1) tot_time = S[0];
    if(tot_time <= K) cout << "YES";
    else cout << "NO";
}

int main(){
    int T;
    cin >> T;
    for(int i=1; i<=T; i++){
        cout << "Case #"<<i<<": ";
        solve();
        if(i!=T) cout << endl;
    }
}