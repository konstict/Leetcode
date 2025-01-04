class CustomStack {
public:
    int maxSize;
    stack<int> a;

    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if(a.size()+1 <= this->maxSize){
            a.push(x);
        }
    }
    
    int pop() {
        if(a.size() == 0){
            return -1;
        }
        else{
            int temp = a.top();
            a.pop();
            return temp;
        }
    }
    
    void increment(int k, int val) {
        stack<int> g = a;
        stack<int> b, c;
        int size = this->a.size();
        for(int i = 0; i < size; ++i){
            b.push(g.top());
            g.pop();
        }
        for(int i = 0; i < size; ++i){
            if(i < k){
                c.push(b.top()+val);
            }
            else{
                c.push(b.top());
            }
            b.pop();
        }
        this->a = c;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
 
 //25 min, 70ms (vector in top 1 :( dis )
