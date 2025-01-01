class Solution {
public:
    int mySqrt(int x) {
        long num = 1;
        int num1 = 1;
        int i = 1;
        while (num < x){
            num = i+(num + 2);
            num1++; i+=2;
        }
        if ((long)num1*(long)num1 <= x) return num1;
        else return num1-1;
    }
}; // 30 min, 16 ms