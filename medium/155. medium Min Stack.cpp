class Node{
public:
    int val;
    Node* next;
    Node* nextmin;

    Node(){
        this->next = nullptr;
    }
    Node(int v){
        this->val = v;
        this->next = nullptr;
        this->nextmin = nullptr;
    }
};

class MinStack {
private:
    Node* topa;
    Node* mina;
public:
    MinStack() {
        this->topa = nullptr;
        this->mina = nullptr;
    }
    
    void push(int val) {
        Node* a = new Node(val);
        Node* b = new Node();
        if(this->topa == nullptr){
            a->next = nullptr;
            this->topa = a;
            this->mina = b;
            this->mina->val = val;
        }
        else{
            a->next = this->topa;
            this->topa = a;

            b->next = this->mina;
            this->mina = b;
            if(val < this->mina->next->val){
                this->mina->val = val;
            }
            else{
                this->mina->val = this->mina->next->val;
            }
        }
    }
    
    void pop() {
        if(this->topa != nullptr){
            this->topa = this->topa->next;
            this->mina = this->mina->next;
        }
    }
    
    int top() {
        if(this->topa != nullptr){
            return this->topa->val;
        }
        return NULL;
    }
    
    int getMin() {
        if(this->mina != nullptr){
            return this->mina->val;
        }
        return NULL;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 // 35min, 4 ms;