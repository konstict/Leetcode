class Solution {
public:
    string reverseWords(string s) {
        string a = "";
        stack<char> b;
        for(int i = 0; i < s.size(); ++i){
            if(s[i] != ' '){
                b.push(s[i]);
            }
            if(s[i] == ' ' or i == s.size()-1){
                while(!b.empty()){
                    a.push_back(b.top());
                    b.pop();
                }
                if(!(i == s.size()-1))
                    a.push_back(' ');
            }
        }
        return a;
    }
}; //6min, 2ms
