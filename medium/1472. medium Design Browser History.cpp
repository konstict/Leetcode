struct Node{
    string val;
    Node* next;
    Node* prev;
    Node(string v) : val(v), next(nullptr), prev(nullptr) {}
};

class BrowserHistory {
public:
    Node* curr;

    BrowserHistory(string homepage) {
        Node* c = new Node(homepage);
        this->curr = c;
    }
    
    void visit(string url) {
        Node* c = new Node(url);
        curr->next = c;
        c->prev = this->curr;
        this->curr = c;
    }
    
    string back(int steps) {
        for(int i = 0; i < steps; ++i){
            if(this->curr->prev){
                this->curr = this->curr->prev;
            }
            else{
                break;
            }
        }
        return this->curr->val;
    }
    
    string forward(int steps) {
        for(int i = 0; i < steps; ++i){
            if(this->curr->next){
                this->curr = this->curr->next;
            }
            else{
                break;
            }
        }
        return this->curr->val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */
 // 9min, 25 ms
