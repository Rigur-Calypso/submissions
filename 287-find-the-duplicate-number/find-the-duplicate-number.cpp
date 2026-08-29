class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                k = nums[i];
            }
        }
        return k;
    }
};