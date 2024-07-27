//1 Stack:- 

#include<iostream>
using namespace std;

class Stack
{
    public:

    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if(size - top >= 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<"The stack is already full"<<endl;
        }
    }
    void pop()
    {
        if(top >= 0)
        {
            top--;
        }
        else
        {
            cout<<"The stack is currently empty and there are no elements to pop"<<endl;
        }
    }
    void peek()
    {
        if(top<0)
        {
            cout<<"There are no elements in the stack to peek"<<endl;
        }
        else
        {
            cout<<"The element at the top of the stack is "<<arr[top]<<endl;
        }
    }
    bool isEmpty()
    {
        if(top<0)
        {
            cout<<"The stack is currently empty"<<endl;
            return true;
        }
        return false;
    }
};
int main()
{
    Stack new_stack(5);

    new_stack.peek();
    new_stack.push(5);
    new_stack.peek();
    new_stack.push(4);
    new_stack.peek();
    new_stack.push(3);
    // new_stack.peek();
    // new_stack.pop();
    // new_stack.peek();
    // new_stack.pop();
    // new_stack.pop();
    // new_stack.pop();
    new_stack.push(2);
    new_stack.push(1);
    new_stack.push(100);    //this element will not get pushed because the stack is already full
    new_stack.peek();
    new_stack.peek();


    return 0;
}
