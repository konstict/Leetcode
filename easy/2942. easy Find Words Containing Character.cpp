class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> a;
        for(int i = 0; i < words.size(); ++i){
            for(char k : words[i]){
                if(k == x){
                    a.push_back(i);
                    break;
                }
            }
        }
        return a;
    }
}; //1m, 0ms
