bool isGood(int k, int i, string s, int* n) {
    for (int j = k; j < i; j++) {
        if (i != j) {
            if (s[i] == s[j]) {
                if (i - k > *n) {
                    *n = i - k;
                }
                return false;
            }
        }
    }
    return true;
}

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = 0;
        int len = s.size();
        if (len > 0) {
            n = 1;
            for (int k = 0; k < len; k++) {
                for (int i = k; i < len; i++) {
                    if (i + 1 == len) {
                        if (isGood(k, i, s, &n) == false) {
                            break;
                        }
                        if (i + 1 - k > n) {
                            n = i + 1 - k;
                        }
                    } else {
                        if (isGood(k, i, s, &n) == false) {
                            if (n == 95) {
                                return n;
                            }
                            break;
                        }
                    }
                }
            }
        }
        return n;
    }
};
// 79ms, 2hour