class Solution {
public:
    int stepen(int num, int step){
        uint32_t n = 1;
        for (int i = 0; i < step; ++i){
            n = n*num;
        }
        return n;
    }

    uint32_t reverseBits(uint32_t n) {
        int array[32] = {};
        for (int i = 0; i < 32; ++i) {
            array[i] = n%2;
            n/=2;
        }
        uint32_t sum = 0;
        for(int i = 32-1; i >= 0; --i){
            if (array[i] == 1){
                sum += stepen(2,31-i);
            }
        }
        return sum;
    }
}; // 20 min, 0 ms