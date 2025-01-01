class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int temp = 0;
            if(height[left] < height[right]){
                temp = height[left];
            }
            else{
                temp = height[right];
            }
            temp = (right - left) * temp;
            if(temp > maxArea){
                maxArea = temp;
            }

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;        
    }
}; // 22min, 0ms