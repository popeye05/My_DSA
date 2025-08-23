

#include <stack>
#include <algorithm> // Not strictly needed but good practice

class MinStack {
private:
    // This stack stores all the elements
    std::stack<int> main_stack;
    
    // This stack only stores the current minimums
    std::stack<int> min_stack;

public:
    // Constructor to initialize the stack object
    MinStack() {
    }
    
    // Pushes the element val onto the stack
    void push(int val) {
        // Always push the value onto the main stack
        main_stack.push(val);
        
        // If the min_stack is empty or if the new value is a new minimum,
        // push it onto the min_stack. We use '<=' to handle duplicate minimums.
        if (min_stack.empty() || val <= min_stack.top()) {
            min_stack.push(val);
        }
    }
    
    // Removes the element on the top of the stack
    void pop() {
        // If the element being popped is the current minimum,
        // it must also be removed from the min_stack to expose the next minimum.
        if (main_stack.top() == min_stack.top()) {
            min_stack.pop();
        }
        
        // Always pop from the main stack
        main_stack.pop();
    }
    
    // Gets the top element of the stack
    int top() {
        return main_stack.top();
    }
    
    // Retrieves the minimum element in the stack
    int getMin() {
        // The current minimum is always at the top of the min_stack
        return min_stack.top();
    }
};
