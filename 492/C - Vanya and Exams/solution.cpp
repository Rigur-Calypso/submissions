#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long b[100001];
int x[100001];
bool c(int i,int j){
    return b[i]<b[j];
}
void solve(){
    long long n,r,avg;
    cin>>n>>r>>avg;
    long long initial = 0;
    for(int i = 0;i<n;i++){
        cin>>a[i]>>b[i];
        initial += a[i];
        x[i] =i;
    }
    long long total = n*avg;
    long long need = total - initial;
    if(need <= 0){
        cout<<0<<endl;
        return;
    }
    sort(x,x+n,c);
    long long essay = 0;
    for(int i = 0;i<n;i++){
        if(need <= 0){
            break;
        }
        int sl = x[i];
        long long req = b[sl];
        long long p = a[sl];
        long long more = r-p;
        long long minimum = min(more,need);
        essay += minimum * req;
        need -= minimum;
    }
    cout<<essay<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}