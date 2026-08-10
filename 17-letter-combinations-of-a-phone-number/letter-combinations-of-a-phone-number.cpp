class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string>pad = {"", " ", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        int n = digits.length();
        if(n==1){
            for(char c1 : pad[digits[0]-'0']){
                string s = "";
                s+=c1;
                ans.push_back(s);
            }

        }
        else if(n==2){
            for(char c1 : pad[digits[0]-'0']){
                for(char c2 : pad[digits[1]-'0']){
                    string s = "";
                    s += c1;
                    s += c2;
                    ans.push_back(s);
                }
            }
        }
        else if (n == 3) {
            for (char c1 : pad[digits[0] - '0']) {
                for (char c2 : pad[digits[1] - '0']) {
                    for (char c3 : pad[digits[2] - '0']) {
                        string s = "";
                        s += c1; 
                        s += c2; 
                        s += c3;
                        ans.push_back(s);
                    }
                }
            }
        }
        else if (n == 4) {
            for (char c1 : pad[digits[0] - '0']) {
                for (char c2 : pad[digits[1] - '0']) {
                    for (char c3 : pad[digits[2] - '0']) {
                        for (char c4 : pad[digits[3] - '0']) {
                            string s = "";
                            s += c1; 
                            s += c2; 
                            s += c3; 
                            s += c4;
                            ans.push_back(s);
                        }
                    }
                }
            }
        }
        return ans;
    }
};