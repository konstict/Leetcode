int findLiteral(char a, char array[7]){
    for (int i = 0; i < 7; i++){
        if (array[i] == a){
            return i;
        }
    }
    return -1;
}

int literalToInt(string s, int i, char array[7], int array1[7]){
    int num = findLiteral(s[i], array);
    int num1 = 0;
    if (i+1 < s.size()){
        num1 = findLiteral(s[i+1], array);
    }
    if (num % 2 == 0 and num != 6) {
        if (num+1==num1 or num+2==num1){
            return -1*array1[num];
        }
    }
    return array1[num];
}

class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        char array[7] = {'I','V','X','L','C','D','M'};
        int array1[7] = {1,5,10,50,100,500,1000};
        for (int i = 0; i < s.size(); i++){
            ans += literalToInt(s,i, array, array1);
        }
        return ans;
    }
}; 
// 0ms, 1hour