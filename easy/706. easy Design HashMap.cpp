class MyHashMap {
public:
    vector<vector<int>> arr;

    MyHashMap() {}
    
    int isKey(int key){
        for(int i = 0; i < arr.size(); ++i){
            if(arr[i][0] == key){
                return i;
            }
        }
        return -1;
    }

    void put(int key, int value) {
        int n = isKey(key);
        if(n != -1){
            arr[n][1] = value;
        }
        else{
            arr.push_back({key,value});
        }
    }
    
    int get(int key) {
        for(int i = 0; i < arr.size(); ++i){
            if(arr[i][0] == key){
                return arr[i][1];
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i = 0; i < arr.size(); ++i){
            if(arr[i][0] == key){
                arr.erase(arr.begin() + i);
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
 // 6min, 167 ms
