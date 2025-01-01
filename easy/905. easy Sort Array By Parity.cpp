class Solution {
public
    vectorint sortArrayByParity(vectorint& nums) {
        vectorint nums1;
        for (int i = 0; i  nums.size(); ++i){
            if (nums[i]%2==0){
                nums1.push_back(nums[i]);
            }
        }
        for (int i = 0; i  nums.size(); ++i){
            if (nums[i]%2!=0){
                nums1.push_back(nums[i]);
            }
        }
        return nums1;
    }
}; // 0ms, 5 min