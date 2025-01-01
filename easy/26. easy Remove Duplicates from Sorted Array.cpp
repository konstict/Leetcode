bool isThere(int num, vector<int> arr){
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == num){
            return true;
        }
    }
    return false;
}

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp = nums;
        nums = {};
        for (int i = 0; i < temp.size(); i++){
            if (isThere(temp[i], nums) == false){
                nums.push_back(temp[i]);
            }
        }
        return nums.size();
    }
}; // 19 ms, 10 min