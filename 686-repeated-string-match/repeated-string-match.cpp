class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n1 = a.length();
        int n2 = b.length();
        int ans = 1;
        string r = a;
        while(r.length()<n2){
            r+= a;
            ans++;
        }
        if(r.find(b) < r.length()){
            return ans;
        }
        r += a;
        if(r.find(b) < r.length()){
            return ans+1;
        }
        return -1;

    }
};