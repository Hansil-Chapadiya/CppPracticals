#include <iostream>
#include <string.h>
using namespace std;
int TOP = -1;
int limit = 5;
class Stack
{
private:
    int *arr = new int[5];

public:
    void push(int);
    void pop();
    void display();
    Stack();
    ~Stack();
};
void Stack ::push(int num)
{
    if (TOP >= limit - 1)
    {
        cout << "Stack is OVERFLOW" << endl;
    }
    else
    {
        TOP++;
        arr[TOP] = num;
    }
}
void Stack ::pop()
{
    if (TOP == -1)
    {
        cout << "Stack is UNDERFLOW" << endl;
    }
    else
    {
        TOP--;
    }
}
void Stack ::display()
{
    cout << endl
         << "Values in stack" << endl;
    for (int i = 0; i <= TOP; i++)
    {
        cout << (arr[i]) << " ";
    }
}
Stack::Stack()
{
}

Stack::~Stack()
{
}
int main()
{
    Stack *s1 = new Stack;
    s1->push(3);
    s1->push(5);
    s1->push(9);
    s1->display();
    s1->pop();
    s1->display();
}