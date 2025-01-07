class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> a({celsius+273.15, celsius*1.80+32.00});
        return a;
    }
}; // 1min, 0ms
