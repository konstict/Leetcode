class Solution {
public:
    string reversePrefix(string word, char ch) {
        int num = -1;
        stack<char> a;
        for(int i = 0; i < word.size(); ++i){
            a.push(word[i]);
            if(word[i] == ch){
                num = i;
                break;
            }
        }
        if (num > 0){
            for(int i = 0; i <= num; ++i){
                word[i] = a.top();
                a.pop();
            }
        }
        return word;
    }
};// 7min, 0ms