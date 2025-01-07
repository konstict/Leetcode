class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0){
            return false;
        }
        vector<int> a;
        while(n != 0){
            a.push_back(n % 2);
            n = n/2;
        }
        bool b = false;
        for(int i : a){
            if(i == 1){
                if (b == false){
                    b = true;
                }
                else{
                    return false;
                }
            }
            
        }
        return true;
    }
}; // 10 min, 2ms   
