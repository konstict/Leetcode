class Solution {
public:
    int addDigits(int num) {
        vector<int> a;
        while(num != 0){
            a.push_back(num%10);
            num/=10;
        }
        int res = 0;
        for(int i = 0; i < a.size(); ++i){
            res+=a[i];
            if(res>9){
                while(res != 0){
                    a.push_back(res%10);
                    res/=10;
                }
            }
        }
        return res;
    }
}; //0ms, 3 min
