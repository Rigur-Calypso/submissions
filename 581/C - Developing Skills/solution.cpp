#include "bits/stdc++.h"
#include <algorithm>
#include <numeric>
 
const int N = 5e5 + 12;
 
using namespace std;
 
typedef long long  ll;
typedef  vector<ll> vll;
typedef  vector<pair<ll,ll>> vpair;
 
typedef unsigned long long ull;
typedef long double lld;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);  
#define yes  cout<<"YES"<<el;
#define no   cout<<"NO"<<el;
 
 
#define int int64_t
#define ll int64_t
#define MOD  998244353
#define mod1 676767677
 
#define all(xxx90)  (xxx90).begin(),(xxx90).end()
#define rall(xxx90)  (xxx90).rbegin(),(xxx90).rend()
 
#define el  "
"
#define El  "
"
#define eL  "
"
#define EL  "
"
 
#define ff  first
#define ss  second
 
#define ppb pop_back
#define MP  make_pair
 
#define pb  push_back
#define lb  lower_bound
#define ub  upper_bound
#define EB  emplace_back
 
#define sa  sort(a.begin(),a.end())
// #define sb  sort(b.begin(),b.end())
 
const int INF =0x7f7f7f7f; 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
static std::chrono::time_point<std::chrono::high_resolution_clock> now() noexcept;
 
void _print(int t) {cerr << t;} void _print(string t) {cerr << t;} void _print(char t) {cerr << t;} void _print(double t) {cerr << t;} void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template<typename T> istream& operator>>(istream&is, vector<T> &arr) { for(auto &it : arr) is >> it; return is;}
template<typename T> ostream& operator<<(ostream&os, vector<T> &arr) { for(auto &it : arr) { os << it << " "; } return os;}
 
 
ll power(ll x, ll y){ ll res = 1ll; while (y > 0ll) { if (y & 1ll)res = res * x; y = y >> 1ll; x = x * x;}return res;}
ll power_mod(ll x, ll y,ll mod){ ll res = 1ll; while (y > 0ll) { if (y & 1ll) res = (res*x)%mod; y = y >> 1ll; x = (x*x)%mod;}return res;}
 
 
set<array<int , 3> ,  greater<array<int , 3 >>> s;
set<int> adjacency[N]; int mm[N] , hey[N] , column[N];
 
 
vector<int> div(int n) {
  vector<int> v;
  for(int i = 1 ; i * i <= n ; ++i) {
    if(n%i == 0) {
      v.pb(i);
      if(n != i * i) v.pb(n/i);
    }
  }
  
  return v;
}
 
 
 
auto fah = [](long long x) { return x >= 0 ? x / 2 : (x - 1) / 2; };
 
 
 
int floorLog2(int x) {
    int res = -1;
    while (x > 0) {
        x >>= 1;  
        ++res;
    }
    return res;
}
 
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int function_1(int x , int k , vector<int> &v){cout << "? " << x << " " << k << " ";
for(auto i : v){
     cout << i << " ";
  }
  
  cout << endl;
 
  int ANS; cin >> ANS;
  return ANS;
 
}
 
 
 
vector<pair<int,int>> v;
 
 
int visited[N];
set<int> adj[N];
int b[N] , d[N][2];
 
int maxm = -MOD , minm = MOD;
int f = 0;
 
int a[N] ,cc[N << 2] , temp[N << 2];
int n , q;
 
 
 
 
int dx[] =  {-1 , -1 , 1 , 0 , 0};
int dy[] = {- 1 , 0 ,0 , - 1 , 1};
 
 
struct tree {
    int l , r , maxm , pos;
} TT[N*4];
 
 
 
 
 
class FenwickTree2D {
private:
    vector<vector<int>> bit;
    int n, m;
 
public:
    FenwickTree2D(int n, int m) : n(n), m(m) {
        bit.assign(n + 1, vector<int>(m + 1, 0));
    }
 
    void add(int x, int y, int delta) {
        for (int i = x; i <= n; i += i & -i) {
            for (int j = y; j <= m; j += j & -j) {
                bit[i][j] += delta;
            }
        }
    }
 
    int sum(int x, int y) {
        int total = 0;
        for (int i = x; i > 0; i -= i & -i) {
            for (int j = y; j > 0; j -= j & -j) {
                total += bit[i][j];
            }
        }
        return total;
    }
 
    int rangeSum(int x1, int y1, int x2, int y2) {
        return sum(x2, y2) - sum(x1 - 1, y2) - sum(x2, y1 - 1) + sum(x1 - 1, y1 - 1);
    }
};
 
void cmax(int &a, int b) {
    a = max(a, b);
}
 
int max(int a , int b) {
     if(a >= b) return a;
     else return b;
}
 
int min(int a  , int b) {
    if(a <= b) return a;
     else return b;
 
 
}
 
 
int few[2010][2] ,temp1[2010][2010] , temp2[2010][2010];
 
 
int calculate(){for(int i=1;i<=n;++i){d[i][0]=d[i][1]=INT_MAX;}d[0][0]=0;d[0][1]=0;d[2][0]=a[1];d[2][0]-=a[2];debug(d[2][0]);if(d[2][0]<0)d[2][0]*=-1;for(int i=3;i<=n;++i){int take_min=d[i-3][0];take_min=min(take_min,d[i-3][1]);debug(take_min);d[i][1]=take_min;debug(d[i][1]);int add=abs(a[i-2]-a[i-1]);add+=abs(a[i]-a[i-1]);debug(add);add=min(add,(abs(a[i]-a[i-1])+abs(a[i]-a[i-2])));debug(add);add=min(add,(abs(a[i]-a[i-2])+abs(a[i-1]-a[i-2])));d[i][1]+=add;debug(d[i][1]);if(i==3){}else{int ck=d[i-2][0];ck=min(ck,d[i-2][1]);debug(ck);int diff=a[i];diff-=a[i-1];debug(diff);if(diff<0){diff*=-1;}debug(diff);diff+=ck;debug(diff);d[i][0]=diff;}}int to=d[n][0];to=min(to,d[n][1]);debug(to);return to;}
bool one(pair<int,int> A , pair<int,int> B) {
     return A.first + A.second < B.first + B.second;
}int function_2(int aa , int bb) { if(aa < 1) { return 0; } if(aa > n) { return 0; } if(bb < 1) { return 0; } if(bb > n) { return 0; } if(aa > bb) { swap(aa , bb); } debug(aa); debug(bb); cout << aa << " " << bb << endl; int xx; cin >> xx; debug(xx); return xx; }
 
int ask_query(const vll &id){cout<<"? "<<id.size();for(auto i:id)cout<<" "<<i;cout<<endl;cout.flush();int dp;cin>>dp;return dp;}
bool two(pair<int,int> A , pair<int,int> B) {
     return A.first - A.second < B.first - B.second;
}
 
auto fn1(int x , vll &p){
    vll b;
    while(x != 0) {
        b.pb(x);x = p[x];
    }
    reverse(all(b)); return b;
}
 
 
int ck_query(int x , int temp1[] , int ans = 0) {
     for(; x;) {
         ans = (ans + temp1[x]) % MOD;
         x -= x&-x;
         debug(x);
     }
     debug(ans);
     return ans;
}
 
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a,int b) {
    return (a / gcd(a, b)) * b;
}
 
// void D1(int v , int p) { visited[v] = 1; mm[v] = MOD; for(auto u : adj[v]) { if(visited[u] == 0) { hey[u] = hey[v]; hey[u] += 1; D1(u , v); mm[v] = min(mm[v] , mm[u]); if(mm[u] > hey[v]) { edge.pb({v , u}); } } else if(u != p) { mm[v] = min(mm[v] , hey[u]); } } debug(edge); debug(minm); debug(maxm); }
// void D2(int v) { visited[v] = 1; if(a[v] == -1) {} else { minm = min(minm , a[v]); maxm = max(maxm , a[v]); debug(minm); debug(maxm); } for(auto u : adj[v]) { if(visited[u] == 0) { column[u] = -1 * column[v]; column[u] += 1; debug(column[u]); D2(u); } else if(column[v] == column[u]) { f = 1; } } debug(edge); debug(minm); debug(maxm); }
 
 
void allahlovesjesus()
{
    int n,k;
    cin>>n>>k;
    vll a(n);
    vll b(n);
    ll cr = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        cr += a[i]/10;
        if(a[i]<100){
            b[i] = 10-(a[i]%10);
            if(b[i]==10){
                b[i]=0;
            }
        }
        else{
            b[i] = 0;
        }
        a[i]+=b[i];
    }
    sort(b.begin(),b.end());
    for(int i = 0;i<n;i++){
        if(b[i]>0 && k>= b[i]){
            k -= b[i];
            cr += 1;
        }
    }
    ll next = 0;
    for(int i = 0;i<n;i++){
        if(a[i]<100){
            next += (100-a[i])/10;
        }
    }
    ll f = k/10;
    cr += min(next,f);
    cout<<cr<<el;
}
 
 
 
 
 
signed main()
{
    fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //#ifndef ONLINE_JUDGE
  //freopen("Error.txt", "w", stderr);
  //freopen("input1.txt", "r", stdin);
  //freopen("output1.txt", "w", stdout);
  //#endif
 
  int test_case=1;
  //cin>>test_case;
 
  
  for(int i=1;i<=test_case;i++)
  {
      // cout<<"Case #"<<i<<": " << el;
      allahlovesjesus();
      // allahlovesjesus2(i);
 
  }
 
  cerr << "Time Baby: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms
";
}