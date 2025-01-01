class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num = 0;
        vector<int> nums1 = nums;
        nums = {};
        for (int i = 0; i < nums1.size(); i++){
            if (nums1[i] != val) {
                nums.push_back(nums1[i]);
                num++;
            }
        }
        return num;
    }
}; // 0ms, 20 min