class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        for(int i = 0; i < size/2; ++i){
            int t = s[size-1-i];
            s[size-1-i] = s[i];
            s[i] = t;
        }
    }
}; // 5min, 0ms
