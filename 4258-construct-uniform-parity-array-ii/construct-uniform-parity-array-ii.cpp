class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even = false;
        bool odd = false;
        int k = nums1[0];
        for(int num : nums1){
            if(num%2==0){
                even = true;
            }
            else{
                odd = true;
            }
            
            if(num<k){
                k = num;
            }
        }
        if(!even || !odd){
            return true;
        }     
        return k%2 != 0;

    }
};
            
