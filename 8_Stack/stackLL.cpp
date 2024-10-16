#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

class Stack
{
private:
    Node *top;

public:
    Stack() : top(nullptr) {}

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        std::cout << val << " pushed onto stack.\n";
    }

    int isEmpty()
    {
        return top == nullptr;
    }

    int pop()
    {

        if (isEmpty())
        {
            cout << "Stack Underflow! cannot pop from empty stack. \n";
            return -1;
        }
        Node *temp = top;
        int poppedValue = top->data;
        delete temp;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Empty" << endl;
            return -1;
        }
        return top->data;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        Node *curr = top;
        cout << "stack elements: " << endl;
        while (curr != nullptr)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }
};

int main()
{
    return 0;
}