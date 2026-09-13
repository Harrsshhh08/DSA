class CustomStack {
     vector<int> ar;
    int top;
    int maxSize;
public:
    CustomStack(int maxSize) {
       ar.resize(maxSize);
       this->maxSize=maxSize;
       top=-1;
    }
    
    void push(int x) {
        if(top<maxSize-1){
            top++;
            ar[top]=x;
        }
    }
    
    int pop() {
        if(top!=-1){
        top--;
        return ar[top+1];}
        else
        return -1;
        
    }
    
    void increment(int k, int val) {
        if(top+1<k){
            for(int i=0;i<=top;i++){
                ar[i]=ar[i]+val;
            }
        }
        else
        for(int i=0;i<k;i++)
        ar[i]=ar[i]+val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */