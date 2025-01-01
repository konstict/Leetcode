class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int num = 0;
        for (int i = 0; i < accounts.size(); ++i){
            int temp = 0;
            for (int j = 0; j < accounts[i].size(); ++j){
                temp+=accounts[i][j];
            }
            if (temp > num){
                num=temp;
            }
        }
        return num;
    }
}; // 0 ms, 2 min