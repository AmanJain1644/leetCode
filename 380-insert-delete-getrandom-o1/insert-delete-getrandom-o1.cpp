class RandomizedSet {
private:
unordered_set<int>stt;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(stt.count(val)) return false;
        stt.insert(val);
        return true;       
    }
    
    bool remove(int val) {
        if(stt.count(val)){
            stt.erase(val);
            return true;
        };
        return false;        
    }
    
    int getRandom() {
        int ran = rand()%(stt.size());
        auto it = stt.begin();
        advance(it,ran);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */