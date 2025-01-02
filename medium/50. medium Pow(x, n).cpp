class Solution {
public:
    double myPow(double x, long n) {
        if(x == 1){
            return x;
        }
        else if(x == -1){
            int is = (n%10)%2;
            if(is == 0){
                x *= -1;
            }
            return x;
        }
        else if(n < 0){
            x = 1/x;
            n *= -1;
        }
        double y = 1;
        for(long i = 0; i < n; ++i){
            if (!y){
                break;
            }
            y = y*x;
        }
        return y;
    }
}; //20min, 2 ms
