#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int Front;
    int Rear;
    static const int max_size = 5;
    int arr[max_size];

public:
    CircularQueue(/* args */);
    void inCQueue(int element);
    void deCQueue();
    void display();
    ~CircularQueue();
};

CircularQueue::CircularQueue(/* args */)
{
    Front = Rear = -1;
}

CircularQueue::~CircularQueue()
{
}

void CircularQueue::inCQueue(int element)
{
    if ((Front == 0) && (Rear == max_size - 1))
    {
        cout << endl
             << "Queue is OVERFLOW" << endl;
    }
    else
    {
        if (Front == -1)
        {
            Front++;
            Rear++;
        }
        else if (Rear == max_size - 1 && Front != 0)
        {
            Rear = 0;
            arr[Rear] = element;
        }
        else
        {
            Rear++;
        }
        arr[Rear] = element;
    }
}

void CircularQueue::deCQueue()
{
    if (Front == -1)
    {
        cout << endl
             << "Queue is Underflow" << endl;
    }
    else
    {
        if (Front == Rear)
        {
            Front = Rear = -1;
        }
        else
        {
            if (Front == max_size - 1)
            {
                Front = 0;
            }
            else
            {
                Front++;
            }
        }
    }
}

void CircularQueue::display()
{
    if (Front == -1) {
      cout<<"Queue is underflow"<<endl;
      return;
   }
    if (Rear >= Front)
    {
        for (int i = Front; i <= Rear; i++)
        {
            cout << endl
                 << arr[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i <= Rear; i++)
        {
            cout << endl
                 << arr[i] << endl;
        }
    }
}

int main()
{
    CircularQueue C1;
    C1.inCQueue(10);
    C1.inCQueue(20);
    C1.inCQueue(30);
    C1.inCQueue(40);
    C1.inCQueue(50);
    C1.display();
    C1.deCQueue();
    C1.deCQueue();
    C1.deCQueue();
    cout << "After Dequeue" << endl;
    C1.display();
    C1.inCQueue(50);
    C1.display();
}