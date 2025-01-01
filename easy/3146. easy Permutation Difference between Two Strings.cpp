class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int num = 0;
        for (int i = 0; i < s.size(); ++i){
            int temp = 0;
            for (int j = 0; j < t.size(); ++j){
                if (s[i] == t[j]){
                    temp = j;
                    break;
                }
            }
            int temp1 = i-temp;
            if (temp1 < 0){
                temp1 *= -1;
            }
            num = num + temp1;

        }
        return num;
    }
}; // 0ms, 10 min