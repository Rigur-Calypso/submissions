class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int k =0;
        for(int i = 0;i<n;i++){
            if(i>k){
                return false;
            }
            k = max(k,i+nums[i]);
            if(k>=n-1){
                return true;
            }
        }
        return true;
    }
};