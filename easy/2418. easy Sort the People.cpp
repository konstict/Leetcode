class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int size = heights.size();
        for(int i = 0; i < size; ++i){
            for(int j = 0; j < size-1-i; ++j){
                if(heights[j] < heights[j+1]){
                    int t = heights[j];
                    string t1 = names[j];
                    heights[j] = heights[j+1];
                    names[j] = names[j+1];
                    heights[j+1] = t;
                    names[j+1] = t1;
                }   
            }
        }
        return names;
    }
}; // 400ms, 3 min
