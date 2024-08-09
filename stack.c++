#include <iostream>

const int MAX_SIZE = 10;

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Stack is full. Cannot push." << std::endl;
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            std::cout << "Stack is empty." << std::endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Peek: " << stack.peek() << std::endl;

    stack.pop();

    std::cout << "Peek: " << stack.peek() << std::endl;

    return 0;
}
