class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int water = 0;
        while(left<right){
            int width = right - left;
            int height1 = min(height[left],height[right]);
            int water1 = width*height1;
            water = max(water,water1);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return water;
    }
};