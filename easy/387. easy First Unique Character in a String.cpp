class Solution {
public:
    int firstUniqChar(string s) {   
        queue<char> a;
        for(char letter : s){
            a.push(letter);
        }
        int size = s.size();
        for(int j = 0; j < size; ++j){
            for(int i = 0; i < size; ++i){
                if(i != j and a.front() == s[i]){
                    a.pop();
                    break;
                }
                else if(i+1 == size){
                    return j;
                }
            }
        }
        return -1;
    }
}; // 20 ms, 9 min
