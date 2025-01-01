class Solution {
public:
    int scoreOfString(string s) {
        int num = 0;
        for(int i = 0; i < s.size()-1; ++i){
            int temp = (int)s[i] - (int)s[i+1];
            if (temp < 0){
                temp *= -1;
            }
            num = num + temp;
        }
        return num;
    }
}; // 0ms, 15 min