#include <iostream>
using namespace std;
class Queue
{
private:
    int REAR, FRONT; // Initialization
    static const int maxSize = 100;
    int arr[maxSize];

public:
    Queue(/* args */);
    void inQueue(int val);
    int deQueue();
    int isEmpty();
    void display();
    ~Queue();
};

Queue::Queue(/* args */)
{
    FRONT = REAR = -1;
}
void Queue::inQueue(int val)
{
    if (REAR >= Queue::maxSize - 1)
    {
        cout << "Queue is overflow" << endl;
    }
    else
    {
        arr[++REAR] = val;
        if (FRONT == -1)
        {
            FRONT++;
        }
        cout << endl
             << "Element inserted successfully" << endl;
    }
}
int Queue::deQueue()
{
    if (FRONT == -1)
    {
        cout << "Queue is underflow" << endl;
    }
    else
    {
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            FRONT++;
        }
        cout << endl
             << "Element deleted successfully" << endl;
    }
}

int Queue::isEmpty()
{
    if (REAR == -1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void Queue::display()
{
    cout << "DISPLAYING VALUE: " << endl;
    for (int i = FRONT; i <= REAR; i++)
    {
        cout << arr[i] << endl;
    }
}
Queue::~Queue()
{
}

int main()
{
    Queue Q1;
    int choice;
    do
    {
        cout << "\nQUEUE Operations Menu:" << endl;
        cout << "1. INQUEUE" << endl;
        cout << "2. DEQUEUE" << endl;
        cout << "3. DISPLAY" << endl;
        cout << "0. EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            int data;
            cout << "Enter element to insert: ";
            cin >> data;
            Q1.inQueue(data);
            break;
        case 2:
            Q1.deQueue();
            break;
        case 3:
            Q1.display();
        default:
            break;
        }
    } while (choice != 0);
}