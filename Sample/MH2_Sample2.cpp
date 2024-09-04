// 4)
// #include <limits.h>
// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 20

// char stk[20];
// int top = -1;

// int isEmpty()
// {
//     return top == -1;
// }
// int isFull()
// {
//     return top == MAX - 1;
// }

// char peek()
// {
//     return stk[top];
// }

// char pop()
// {
//     if (isEmpty())
//         return -1;

//     char ch = stk[top];
//     top--;
//     return (ch);
// }

// void push(char oper)
// {
//     if (isFull())
//         printf("Stack Full!!!!");

//     else
//     {
//         top++;
//         stk[top] = oper;
//     }
// }

// int checkIfOperand(char ch)
// {
//     return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
// }

// int precedence(char ch)
// {
//     switch (ch)
//     {
//     case '+':
//     case '-':
//         return 1;

//     case '*':
//     case '/':
//         return 2;

//     case '^':
//         return 3;
//     }
//     return -1;
// }

// int covertInfixToPostfix(char *expression)
// {
//     int i, j;

//     for (i = 0, j = -1; expression[i]; ++i)
//     {
//         if (checkIfOperand(expression[i]))
//             expression[++j] = expression[i];

//         else if (expression[i] == '(')
//             push(expression[i]);

//         else if (expression[i] == ')')
//         {
//             while (!isEmpty() && peek() != '(')
//                 expression[++j] = pop();
//             if (!isEmpty() && peek() != '(')
//                 return -1;
//             else
//                 pop();
//         }
//         else
//         {
//             while (!isEmpty() && precedence(expression[i]) <= precedence(peek()))
//                 expression[++j] = pop();
//             push(expression[i]);
//         }
//     }

//     while (!isEmpty())
//         expression[++j] = pop();

//     expression[++j] = '\0';
//     printf("%s", expression);
// }

// int main()
// {
//     char expression[] = "((x+(y*z))-w)";
//     covertInfixToPostfix(expression);
//     return 0;
// }
// // 7)
// #include <stdio.h>
// #include <stdlib.h>

// #define MAX_SIZE 10

// struct Deque
// {
//     int capacity;
//     int front;
//     int rear;
//     int *arr;
// };

// struct Deque *createDeque(int capacity)
// {
//     struct Deque *deque = (struct Deque *)malloc(sizeof(struct Deque));
//     deque->capacity = capacity;
//     deque->front = -1;
//     deque->rear = -1;
//     deque->arr = (int *)malloc(capacity * sizeof(int));
//     return deque;
// }

// int is_empty(struct Deque *deque)
// {
//     return (deque->front == -1);
// }

// int is_full(struct Deque *deque)
// {
//     return ((deque->rear + 1) % deque->capacity == deque->front);
// }

// void insert_rear(struct Deque *deque, int value)
// {
//     if (is_full(deque))
//     {
//         printf("Error: Deque is full. Cannot insert.\n");
//         return;
//     }

//     if (is_empty(deque))
//     {
//         deque->front = 0;
//     }

//     deque->rear = (deque->rear + 1) % deque->capacity;
//     deque->arr[deque->rear] = value;
//     printf("Inserted %d at the rear.\n", value);
// }

// void display(struct Deque *deque)
// {
//     if (is_empty(deque))
//     {
//         printf("Deque is empty.\n");
//         return;
//     }

//     printf("Deque elements: ");
//     int i = deque->front;
//     do
//     {
//         printf("%d ", deque->arr[i]);
//         i = (i + 1) % deque->capacity;
//     } while (i != (deque->rear + 1) % deque->capacity);
//     printf("\n");
// }

// int main()
// {
//     struct Deque *deque = createDeque(MAX_SIZE);

//     insert_rear(deque, 10);
//     insert_rear(deque, 20);
//     insert_rear(deque, 30);

//     display(deque);

//     free(deque->arr);
//     free(deque);

//     return 0;
// }

// // 8)

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *createNode(int value)
// {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;
//     return newNode;
// }

// void displayList(struct Node *head)
// {
//     struct Node *current = head;
//     while (current != NULL)
//     {
//         printf("%d -> ", current->data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }

// void insertFront(struct Node **head, int value)
// {
//     struct Node *newNode = createNode(value);
//     newNode->next = *head;
//     *head = newNode;
//     printf("Node with data %d inserted at the front.\n", value);
// }

// void insertEnd(struct Node **head, int value)
// {
//     struct Node *newNode = createNode(value);
//     if (*head == NULL)
//     {
//         *head = newNode;
//     }
//     else
//     {
//         struct Node *current = *head;
//         while (current->next != NULL)
//         {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
//     printf("Node with data %d inserted at the end.\n", value);
// }

// void insertAscending(struct Node **head, int value)
// {
//     struct Node *newNode = createNode(value);
//     struct Node *current = *head;
//     struct Node *prev = NULL;

//     while (current != NULL && current->data < value)
//     {
//         prev = current;
//         current = current->next;
//     }

//     if (prev == NULL)
//     {
//         newNode->next = *head;
//         *head = newNode;
//     }
//     else
//     {
//         prev->next = newNode;
//         newNode->next = current;
//     }

//     printf("Node with data %d inserted in ascending order.\n", value);
// }

// void deleteFirst(struct Node **head)
// {
//     if (*head == NULL)
//     {
//         printf("Error: List is empty. Cannot delete.\n");
//         return;
//     }

//     struct Node *temp = *head;
//     *head = (*head)->next;
//     free(temp);

//     printf("First node deleted.\n");
// }

// void deleteBefore(struct Node **head, int position)
// {
//     if (*head == NULL || (*head)->next == NULL)
//     {
//         printf("Error: List is empty or has only one node. Cannot delete before.\n");
//         return;
//     }

//     struct Node *current = *head;
//     struct Node *prev = NULL;

//     while (current->next != NULL && current->next->data != position)
//     {
//         prev = current;
//         current = current->next;
//     }

//     if (prev == NULL)
//     {
//         printf("Error: No node found before the specified position.\n");
//         return;
//     }

//     struct Node *temp = prev->next;
//     prev->next = temp->next;
//     free(temp);

//     printf("Node before position %d deleted.\n", position);
// }

// void deleteAfter(struct Node **head, int position)
// {
//     if (*head == NULL)
//     {
//         printf("Error: List is empty. Cannot delete after.\n");
//         return;
//     }

//     struct Node *current = *head;

//     while (current != NULL && current->data != position)
//     {
//         current = current->next;
//     }

//     if (current == NULL || current->next == NULL)
//     {
//         printf("Error: No node found at the specified position or no node after the position.\n");
//         return;
//     }

//     struct Node *temp = current->next;
//     current->next = temp->next;
//     free(temp);

//     printf("Node after position %d deleted.\n", position);
// }

// int main()
// {
//     struct Node *head = NULL;
//     int choice, data, position;

//     do
//     {
//         printf("\nMenu:\n");
//         printf("1. Insert at Front\n");
//         printf("2. Insert at End\n");
//         printf("3. Insert in Ascending Order\n");
//         printf("4. Delete First\n");
//         printf("5. Delete Before Position\n");
//         printf("6. Delete After Position\n");
//         printf("7. Display List\n");
//         printf("8. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice)
//         {
//         case 1:
//             printf("Enter data to insert at front: ");
//             scanf("%d", &data);
//             insertFront(&head, data);
//             break;
//         case 2:
//             printf("Enter data to insert at end: ");
//             scanf("%d", &data);
//             insertEnd(&head, data);
//             break;
//         case 3:
//             printf("Enter data to insert in ascending order: ");
//             scanf("%d", &data);
//             insertAscending(&head, data);
//             break;
//         case 4:
//             deleteFirst(&head);
//             break;
//         case 5:
//             printf("Enter position before which");
//         }
//     } while (choice != 0);
// }

// 9
#include <stdio.h>
#include <stdlib.h>

// Node structure for doubly linked list
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to display the doubly linked list
void displayList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to insert a node at the front of the doubly linked list
void insertFront(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
    printf("Node with data %d inserted at the front.\n", value);
}

// Function to insert a node at the end of the doubly linked list
void insertEnd(struct Node **head, int value)
{
    struct Node *newNode = createNode(value);
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    printf("Node with data %d inserted at the end.\n", value);
}

// Function to delete the last node of the doubly linked list
void deleteLast(struct Node **head)
{
    if (*head == NULL)
    {
        printf("Error: List is empty. Cannot delete.\n");
        return;
    }

    struct Node *current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    if (current->prev != NULL)
    {
        current->prev->next = NULL;
    }
    else
    {
        // If only one node is present
        *head = NULL;
    }

    free(current);
    printf("Last node deleted.\n");
}

// Function to delete a node before specified position
void deleteBeforePosition(struct Node **head, int position)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        printf("Error: List is empty or has only one node. Cannot delete before position.\n");
        return;
    }

    struct Node *current = *head;
    while (current != NULL && current->data != position)
    {
        current = current->next;
    }

    if (current == NULL || current->prev == NULL)
    {
        printf("Error: No node found at the specified position or no node before the position.\n");
        return;
    }

    struct Node *temp = current->prev;
    if (temp->prev != NULL)
    {
        temp->prev->next = current;
    }
    else
    {
        // If deleting the first node
        *head = current;
    }

    current->prev = temp->prev;
    free(temp);
    printf("Node before position %d deleted.\n", position);
}

// Function to free the memory allocated for the doubly linked list
void freeList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        struct Node *next = current->next;
        free(current);
        current = next;
    }
}

int main()
{
    struct Node *head = NULL;
    int choice, data, position;

    do
    {
        printf("\nMenu:\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at End\n");
        printf("3. Delete Last\n");
        printf("4. Delete Before Position\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at front: ");
            scanf("%d", &data);
            insertFront(&head, data);
            break;
        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            insertEnd(&head, data);
            break;
        case 3:
            deleteLast(&head);
            break;
        case 4:
            printf("Enter position before which to delete: ");
            scanf("%d", &position);
            deleteBeforePosition(&head, position);
            break;
        case 5:
            displayList(head);
            break;
        case 6:
            freeList(head);
            printf("Exiting the program.\n");
        }
    } while (choice != 0);
}

// 10)
/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void concatenateLists(struct Node** list1, struct Node* list2) {
    if (*list1 == NULL) {
        *list1 = list2;
    } else {
        struct Node* current = *list1;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = list2;
        if (list2 != NULL) {
            list2->prev = current;
        }
    }
}

int main() {
    struct Node* list1 = createNode(1);
    list1->next = createNode(2);
    list1->next->prev = list1;
    list1->next->next = createNode(3);
    list1->next->next->prev = list1->next;

    struct Node* list2 = createNode(4);
    list2->next = createNode(5);
    list2->next->prev = list2;

    printf("List 1: ");
    displayList(list1);

    printf("List 2: ");
    displayList(list2);

    concatenateLists(&list1, list2);

    printf("Concatenated List: ");
    displayList(list1);

    return 0;
}
*/

// 11)
/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inOrderRecursive(struct Node* root) {
    if (root != NULL) {
        inOrderRecursive(root->left);
        printf("%d ", root->data);
        inOrderRecursive(root->right);
    }
}

void preOrderRecursive(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderRecursive(root->left);
        preOrderRecursive(root->right);
    }
}

void postOrderRecursive(struct Node* root) {
    if (root != NULL) {
        postOrderRecursive(root->left);
        postOrderRecursive(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("In-Order Recursive: ");
    inOrderRecursive(root);
    printf("\n");

    printf("Pre-Order Recursive: ");
    preOrderRecursive(root);
    printf("\n");

    printf("Post-Order Recursive: ");
    postOrderRecursive(root);
    printf("\n");

    return 0;
}

*/

// 12)
/*
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high)
{
//choose the pivot

int pivot=arr[high];
//Index of smaller element and Indicate
//the right position of pivot found so far
int i=(low-1);

for(int j=low;j<=high;j++)
{
    //If current element is smaller than the pivot
    if(arr[j]<pivot)
    {
    //Increment index of smaller element
    i++;
    swap(arr[i],arr[j]);
    }
}
swap(arr[i+1],arr[high]);
return (i+1);
}

// The Quicksort function Implement

void quickSort(int arr[],int low,int high)
{
// when low is less than high
if(low<high)
{
    // pi is the partition return index of pivot

    int pi=partition(arr,low,high);

    //Recursion Call
    //smaller element than pivot goes left and
    //higher element goes right
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
}
}


int main() {
int arr[]={10,7,8,9,1,5};
int n=sizeof(arr)/sizeof(arr[0]);
// Function call
quickSort(arr,0,n-1);
//Print the sorted array
cout<<"Sorted Array\n";
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
// This Code is Contributed By Diwakar Jha
*/

// 13)
/*
#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;   // Initial index of first subarray
    j = 0;   // Initial index of second subarray
    k = left;  // Initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Same as (left+right)/2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("Sorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
*/

// 14)
/*
#include <stdio.h>

void swap(int* xp, int* yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array is \n");
    printArray(arr, n);
    return 0;
}
*/

// 15)
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater, ignore the left half
        if (arr[mid] < key)
            left = mid + 1;

        // If key is smaller, ignore the right half
        else
            right = mid - 1;
    }

    // Key not found in array
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearch(arr, 0, n - 1, key);

    (result == -1) ? printf("Element is not present in array\n")
                   : printf("Element is present at index %d\n", result);
    return 0;
}

/*
 */
