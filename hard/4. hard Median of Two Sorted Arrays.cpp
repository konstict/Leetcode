class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median = 0;
        int s = nums2.size();
        for(int i = 0; i < s; ++i){
            nums1.push_back(nums2[i]);
        }
        int size = nums1.size();
        for(int i = 0; i < size; ++i){
            for(int j = 0; j < size-1-i; ++j){
                if(nums1[j] > nums1[j+1]){
                    int temp = nums1[j];
                    nums1[j] = nums1[j+1];
                    nums1[j+1] = temp;
                }
            }
        }
        int t = size/2;
        if(size%2 == 0){
            median = nums1[t-1]+nums1[t];
            median/=2;
        }
        else{
            median = nums1[t];
        }
        return median;
    }
}; // 40ms, 23 min