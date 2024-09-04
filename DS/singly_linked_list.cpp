#include <iostream>
using namespace std;

class singly_linked_list
{
private:
    int data;
    singly_linked_list *next;
    singly_linked_list *head = NULL;

public:
    singly_linked_list(/* args */);
    void insertAtBegin(int);
    void displayList();
    ~singly_linked_list();
};

singly_linked_list::singly_linked_list(/* args */)
{
}
void singly_linked_list::insertAtBegin(int data)
{
    singly_linked_list *ptr = (singly_linked_list *)malloc(sizeof(singly_linked_list *));
    if (ptr == NULL)
    {
        cout << "List is Overflow" << endl;
    }
    else
    {
        ptr->data = data;
        ptr->next = head;
        head = ptr;
        cout << "Node Inserted At Begin Successfully";
    }
}
void singly_linked_list::displayList()
{
    if(this->head == NULL)
    {
        cout<<endl<<"List is UnderFlow"<<endl;
        return;
    }
    singly_linked_list *ptr;
    ptr = this->head;
    while (ptr != NULL)
    {
        cout<<endl<<"data:"<<(ptr->data)<<endl;
        ptr = ptr->next;
    }
}
singly_linked_list::~singly_linked_list()
{
}
int main()
{
    singly_linked_list S1;
    S1.insertAtBegin(10);
    S1.displayList();
}
