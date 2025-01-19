class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int num = 0;
        for(int i = 0; i < nums.size(); ++i){
            num += nums[i];
            nums[i] = num;
        }
        return nums;
    }
}; // 1min, 0ms
