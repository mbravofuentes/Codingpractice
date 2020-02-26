#include <stack>
#include <cstdio>

using namespace std;
/*
template<class T>
class ArrayStack{
    private:
    size_t maxSize;
    size_t top;
    T * stack;

    public:
    ArrayStack(size_t mSize=100){
        assert(mSize > 0);
        maxSize = mSize;
        stack = new T[maxSize];
        top = 0;
    }

    //clear stack
    void clear() {top = 0;}
    //size of stack
    size_t size() { return top; }
    //check is stack is empty 
    bool empty() { return top == 0; };
    //Check if its full
    bool full() { return top == maxSize; }
    //return max size 
    size_t max_size() {return maxSize; }

    //push data on top of stack
    void push(T value){
        assert(!full());
        stack[top++] = value;
    }
    //rem and return element from top of stack
    T pop(){
        assert(!empty());
        return stack[--top];
    }
    //return top element 
    T get_top(){
        assert(!empty());
        return stack[top-1];
    }
};
*/
int main(){
    stack<char> iStack;
    char c;
    while(scanf("%c", &c) != EOF && c != '\n'){
        if (c == '<'){
            iStack.pop();
        }
        else {
            iStack.push(c);
        }
    }
    if(iStack.size() > 0){
        char count[iStack.size() + 1];
        count[iStack.size()] = '\0';
    while(!iStack.empty()){
        count[iStack.size() - 1] = iStack.top();
        iStack.pop();
    }
    printf("%s", count);
    }
    return 0;
}