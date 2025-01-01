class Solution {
public:
    int hammingWeight(int n) {
        int num = 0;
        while (n != 0) {
            if ( n%2 == 1) {
                num++;
            }
            n /= 2;
        }
        return num;
    }
}; // 0 ms, 6 min