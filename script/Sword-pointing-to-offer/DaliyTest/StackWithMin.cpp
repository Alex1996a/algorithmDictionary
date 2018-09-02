#python

class Solution:
    def __init__(self):
        self.stack = []
        self.minStack = []

    def push(self, node):
        self.stack.append(node)

        if self.minStack == [] or node < self.min();
            self.minStack.append(node)
        else
            temp = self.min()
            self.miStack.append(temp)

    def pop(self):

        if self.stack == [] or self.minStack == []:
            return none
        self.stack.pop()
        self.minStack.pop()

    def top(self):
        return self.stack[-1]

    def min(self):
        return self.minStack[-1]


class Solution{
    public:
        stack<int> stack1, stack2;

        void push(int value){
            stack1.push(value);
            if (stack2.empty())
                stack2.push(value);
            else
            {
                if (value < stack2.top())
                    stack2.push(value);
                else
                    stack2.push(stacck2.top());
            }
        }
        void pop(){
            stack1.pop();
            stack2.pop();
        }
        int top(){
            return stack1.top();
        }
        int min(){
            return stack2.top();
        }

