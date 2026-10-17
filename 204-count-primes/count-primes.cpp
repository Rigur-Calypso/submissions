class Solution {
public:
#define ll long long
    int countPrimes(int n) {
        if (n == -1 || n == 0) return 0;
        vector<ll> spf(n + 1, 0);
        for (ll i=1; i<=n; i++) spf[i] = i;
        for (ll i=2; i<=n; i++){
            if (spf[i] == i){
                for (ll j = i*i; j<=n; j+=i) spf[j] = i;
            }
        }
        ll cnt = 0;
        for (ll i=2; i<n; i++) if (spf[i] == i) cnt++;
        return cnt;
    }
};