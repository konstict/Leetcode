class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> boo;
        int max = 0;
        for (int i = 0; i < candies.size(); ++i){
            if (candies[i] > max){
                max = candies[i];
            }
        }
        for(int i = 0; i < candies.size(); ++i){
            if (candies[i] + extraCandies >= max){
                boo.push_back(true);
            }
            else{
                boo.push_back(false);
            }
        }
        return boo;
    }
}; // 0ms, 4 min