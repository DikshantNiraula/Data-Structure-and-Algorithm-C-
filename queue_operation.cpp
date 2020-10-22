#include <iostream>
using namespace std;
#define MAX 6
int Q[MAX];
int front, rear;

int enqueue()
{
    int data;
    if (rear == MAX)
    {
        cout << "Linear Queue is full \n";
        return 1;
    }
    else
    {
        cout << "Enter data: \n";
        cin >> data;
        Q[rear] = data;
        rear++;
        cout << "Data Inserted in the Queue \n";
    }
}

int dequeue()
{
    if (rear == front)
    {
        cout << "Queue is Empty.. \n";
        return 1;
    }
    else
    {
        cout << "Deleted element from Queue is \n";
        front++;
    }
}

int display()
{
    int i;
    if (front == rear)
    {
        cout << "Queue is Empty \n";
        return 1;
    }
    else
    {
        cout << "Elements of queue are: \n";
        for (i = front; i < rear; i++)
        {
            cout << Q[i] << "\t";
        }
        cout << endl;
    }
}

int menu()
{
    int ch;
    cout << "\n \tQueue operations using ARRAY..";
    cout << "\n -----------**********-------------\n";
    cout << "\n 1. Insert ";
    cout << "\n 2. Delete ";
    cout << "\n 3. Display";
    cout << "\n 4. Quit ";
    cout << "\n Enter your choice: ";
    cin >> ch;
    return ch;
}

int main()
{
    int ch;
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        }
    } while (1);
}