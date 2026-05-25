class MyHashSet {
    private:
        unordered_set<int> data;
    public:
        MyHashSet() {}
    
        void add(int key) {
            data.insert(key);
        
        }
    
        void remove(int key) {
            data.erase(key);
        
        }
    
        bool contains(int key) {
            return data.count(key);
        
        }   
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */