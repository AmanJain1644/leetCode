class MinStack {
private:
vector<int>arr;
vector<int>minarr;
public:
    MinStack() {

    }
    
    void push(int val) {
        arr.push_back(val);   
        if(minarr.empty()||val<=minarr.back()) minarr.push_back(val);     
    }
    
    void pop() {
        if(arr.back()==minarr.back()) minarr.pop_back();
        arr.pop_back();        
    }
    
    int top() {
        
        return arr.back();        
    }
    
    int getMin() {
        return minarr.back();
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