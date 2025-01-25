class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int left = purchaseAmount+1, right = purchaseAmount;
        while (left % 10 != 0 and right % 10 != 0){
            left--; right++;
        }
        return left % 10 == 0 ? 100-left : 100-right;
    }
}; // 0ms, 4 min
