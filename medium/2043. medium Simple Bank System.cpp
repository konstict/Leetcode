class Bank {
public:
    vector<long long> bal;

    Bank(vector<long long>& balance) {
        this-> bal = balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        account1 -= 1;
        account2 -= 1;
        int size = this->bal.size();
        if(size > account1 and size > account2 and this->bal[account1] >= money){
            bal[account1] -= money;
            bal[account2] += money;
            return true;
        }
        return false;
    }
    
    bool deposit(int account, long long money) {
        account -= 1;
        if(this->bal.size() > account){
            bal[account] += money;
            return true;
        }
        return false;
    }
    
    bool withdraw(int account, long long money) {
        account -= 1;
        if(this->bal.size() > account and this->bal[account] >= money){
            bal[account] -= money;
            return true;
        }
        return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
 // 8min, 1 ms
