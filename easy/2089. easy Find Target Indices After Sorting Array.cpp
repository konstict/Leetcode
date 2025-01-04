class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> a;
        for(int i = 0; i < nums.size(); ++i){
            for(int j = 0; j < nums.size()-1-i; ++j){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
        int num = -1;
        int left = 0, right = nums.size()-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(nums[mid] == target){
                num = mid;
                break;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }   
            else if(nums[mid] > target){
                right = mid-1;
            }
        }
        if(num != -1){
            a.push_back(num);
            for(int i = num+1; i < nums.size() and nums[i] == target; ++i){
                a.push_back(i);
            }
            for(int i = num-1; i >= 0 and nums[i] == target; --i){
                a.insert(a.begin(), i);
            }
        }
        return a;
    }
}; //0ms, 16 min
