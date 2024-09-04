/* #include <iostream>
#include <cstdlib> // Include for malloc and free

int main()
{
    int *ptr;
    int n, i, sum = 0;

    std::cout << "Enter Number of Elements: ";
    std::cin >> n;

    ptr = (int *)std::malloc(n * sizeof(int)); // Using 'malloc' to allocate memory

    std::cout << "Enter Elements of Array: ";

    for (i = 0; i < n; ++i)
    {
        std::cin >> *(ptr + i);
        sum += *(ptr + i);
    }

    std::cout << "Sum=" << sum << std::endl;

    std::free(ptr); // Using 'free' to deallocate memory

    return 0;
}
 */

/* #include <iostream>
#include <cstdlib> // Include for malloc and free

int main()
{
    int *ptr;
    int n, i, sum = 0;

    std::cout << "Enter Number of Elements: ";
    std::cin >> n;

    ptr = (int *)std::malloc(n * sizeof(int)); // Using 'malloc' to allocate memory

    std::cout << "Enter Elements of Array: ";

    for (i = 0; i < n; ++i)
    {
        std::cin >> *(ptr + i);
        sum += *(ptr + i);
    }

    std::cout << "Sum=" << sum << std::endl;

    std::free(ptr); // Using 'free' to deallocate memory

    return 0;
}

 */
/*
#include <iostream>
using namespace std;

class Stack
{
private:
    static const int max_size = 100; // Maximum size of the stack
    int arr[max_size];               // Array to store stack elements
    int top;                         // Index of the top element

public:
    Stack() { top = -1; } // Constructor to initialize an empty stack

    // Push an element onto the stack
    void push(int data)
    {
        if (top >= max_size - 1)
        {
            cout << "Stack Overflow! Cannot push element " << data << endl;
            return;
        }
        arr[++top] = data;
        cout << "Pushed " << data << " onto the stack." << endl;
    }

    // Pop the top element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        cout << "Popped " << arr[top] << " from the stack." << endl;
        --top;
    }

    // Peek at the top element of the stack
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty. No top element." << endl;
            return -1;
        }
        return arr[top];
    }

    // Change the value at the top of the stack
    void change(int newValue)
    {
        if (isEmpty())
        {
            cout << "Stack is empty. Cannot change value." << endl;
            return;
        }
        arr[top] = newValue;
        cout << "Changed top element to " << newValue << "." << endl;
    }

    // Display all elements in the stack
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements (from top to bottom): ";
        for (int i = top; i >= 0; --i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Check if the stack is empty
    bool isEmpty()
    {
        return top == -1;
    }
};

int main()
{
    Stack stack;

    int choice;
    do
    {
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Change" << endl;
        cout << "5. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int data;
            cout << "Enter element to push: ";
            cin >> data;
            stack.push(data);
            break;
        }
        case 2:
            stack.pop();
            break;
        case 3:
            cout << "Top element: " << stack.peek() << endl;
            break;
        case 4:
        {
            int newValue;
            cout << "Enter new value: ";
            cin >> newValue;
            stack.change(newValue);
            break;
        }
        case 5:
            stack.display();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

 */
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to return precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    if (op == '*' || op == '/')
    {
        return 2;
    }
    if (op == '^')
    {
        return 3;
    }
    return 0;
}

// Function to convert infix expression to postfix notation
string infixToPostfix(const string &infix)
{
    stack<char> st;
    string postfix;

    for (char c : infix)
    {
        if (isalnum(c))
        {
            postfix += c;
        }
        else if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // Pop '('
        }
        else
        {
            while (!st.empty() && precedence(c) <= precedence(st.top()))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main()
{
    string infixExpression;

    cout << "Enter an infix expression: ";
    getline(cin, infixExpression);

    string postfixExpression = infixToPostfix(infixExpression);

    cout << "Postfix expression: " << postfixExpression << endl;

    return 0;
}
