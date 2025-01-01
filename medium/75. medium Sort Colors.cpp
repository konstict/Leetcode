class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> nums2 = {0,0,0};
        for(int i = nums.size()-1; i >= 0; --i){
            nums2[nums[i]]++;
            nums.pop_back();
        }
        for(int j = 0; j < 3; ++j){
            for(int i = 0; i < nums2[j]; ++i){
                nums.push_back(j);
            }
        }
    }
};// 9min,0ms