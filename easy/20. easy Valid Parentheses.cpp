class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        for(char i : s){
            if(i == '(' or i == '[' or i == '{'){
                a.push(i);
            }
            else if(a.empty()){return false;}
            else if( (i == ')' and a.top() == '(') 
                or (i == ']' and a.top() == '[') 
                or (i == '}' and a.top() == '{') ){
                a.pop();
                }
            else{return false;}
        }
        return a.empty();
    }
};//0ms, 16 min, O(n+3)
