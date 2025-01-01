class Solution {
public:
    int maxDepth(string s) {
        stack<char> a;
        int num = 0;
        int temp = 0;
        for(char i : s){
            if(i == '('){
                a.push(i);
                temp++;
            }
            else if(i == ')'){
                temp--;
                a.pop();
            }
            if(temp>num){
                num = temp;
            }
        }
        return num;
    }
};// 15min, 0ms
