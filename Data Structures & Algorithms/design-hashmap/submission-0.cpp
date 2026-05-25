class MyHashMap {
public:
    map<int ,int> maps;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        maps[key]=value;
        
    }
    
    int get(int key) {
        if(maps.count(key)){
            return maps[key];
        }
        return -1;
        
        
    }
    
    void remove(int key) {
        maps.erase(key);
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */