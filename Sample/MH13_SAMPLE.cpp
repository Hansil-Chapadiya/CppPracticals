#include <iostream>
using namespace std;
// Abstract class QUEUE
class QUEUE
{
protected:
    int *arr = new int[5];
    int FRONT;
    int REAR;

public:
    QUEUE();
    virtual void enQueue(int){}
    virtual void deQueue(){}
    ~QUEUE();
};

// Operation QUEUE class
class QUEUETEST : public QUEUE
{
public:
    QUEUETEST();
    void enQueue(int);
    void deQueue();
    void display();
    ~QUEUETEST();
};

// Constructor of QUEUE class
QUEUE::QUEUE(/* args */)
{
    FRONT = -1;
    REAR = -1;
}

// Destructor of QUEUE class
QUEUE::~QUEUE()
{
}

// Constructor of QUEUETEST class
QUEUETEST::QUEUETEST() : QUEUE()
{
}

// Destructor of QUEUETEST class
QUEUETEST::~QUEUETEST()
{
}

// FUNCTION
// @brief
void QUEUETEST::enQueue(int num)
{
    if (REAR >= 4)
    {
        cout << "QUEUE is OVERFLOW" << endl;
        exit(0);
    }
    else
    {
        REAR += 1;
        if (REAR == 0)
        {
            FRONT = 0;
        }
        arr[REAR] = num;
    }
}
void QUEUETEST::deQueue()
{
    if (FRONT == -1)
    {
        cout<< "QUEUE is UNDERFLOW" << endl;
    }
    else
    {
        FRONT += 1;
    }
    
}
void QUEUETEST::display()
{
    cout << endl << "DISPLAY VALUES IN QUEUE" << endl;
    for (int i = FRONT; i <= REAR; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    QUEUETEST *Q1 = new QUEUETEST;
    Q1->enQueue(5);
    Q1->enQueue(9);
    Q1->display();
    Q1->deQueue();
    Q1->display();
}