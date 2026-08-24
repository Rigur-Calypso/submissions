class Solution {
public:
    int uniquePaths(int m, int n) {
        long long x = m+n-2;
        long long y = min(m-1,n-1);
        long long ans = 1;
        for(int i = 1;i<=y;i++){
            ans = ans*(x-i+1)/i;
        }
        return ans;
    }
};