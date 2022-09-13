//using 2 stacks
class MyQueue {
public:
    stack<int> prime;
    stack<int> sec;
    MyQueue() {
        
    }
    
    void push(int x) {
        prime.push(x);
    }
    
    int pop() {
        if(prime.empty()) return -1;
        
        int x;
        while(prime.size()!=1){
            sec.push(prime.top());
            prime.pop();
        }
        
        x = prime.top();
        prime.pop();
        
        while(!sec.empty()){
            prime.push(sec.top());
            sec.pop();
        }
        
        return x;
    }
    
    int peek() {
        if(prime.empty()) return -1;
        
        int x;
        while(prime.size()!=1){
            sec.push(prime.top());
            prime.pop();
        }
        
        x = prime.top();
        
        while(!sec.empty()){
            prime.push(sec.top());
            sec.pop();
        }
        
        return x;
    }
    
    bool empty() {
        return prime.empty();
    }
};
