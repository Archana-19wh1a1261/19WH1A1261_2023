class MinStack {
public:
MinStack() {

}
stack<int>stk;
stack<int>minstk;
void push(int val) {
    if(stk.empty())
    {
        stk.push(val);
        minstk.push(val);
        
    }
    else
    {
        if(minstk.top()>=val)
            minstk.push(val);
        stk.push(val);
    }
}

void pop() {
    
    if(!minstk.empty() && stk.top()==minstk.top())
        minstk.pop();
    stk.pop();
}

int top() {
    if(stk.empty())
    {
        return -1;
    }
    return stk.top();
}

int getMin() {
    if(minstk.empty())
        return -1;
    return minstk.top();
}
};