class Solution {
public:
    int lengthOfLastWord(string s) {
        int num = 0;
        int i = s.size()-1;
        for(; i >= 0; --i){
            if(s[i] != ' '){
                break;
            }
        }
        for(; i >= 0; --i){
            if(s[i] == ' '){
                break;
            }
            num++;
        }
        return num;
    }
}; // 6 min, 0ms
