class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        vector<int> tableOfFalse(size+1, false);
        vector<int> ans;
        for(int i = 0; i < size; ++i){
            if(tableOfFalse[nums[i]] == false){
                tableOfFalse[nums[i]] = true;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
}; // 18 min, 1ms
