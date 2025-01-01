class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        queue<int> a;
        for (int i : tickets) {
            a.push(i);
        }
        while (k != -1) {
            time++;
            k--;
            a.front() -= 1;
            if (a.front() > 0) {
                a.push(a.front());
            } 
            else {
                if (k == -1) {
                    return time;
                }
            }
            a.pop();
            if (k == -1) {
                k = a.size() - 1;
            }
        }
        return time;
    }
}; // 30min, 0ms