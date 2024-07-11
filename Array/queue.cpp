#include <iostream>
using namespace std;

#define size 5
int queue[size], front = -1,rear = -1;

void insert(int);
int dlt();

int main()
{
    while (1)
    {
        int ch, x, y;
        cout << "\nQueue operations:";
        cout << "\n1:INSERT";
        cout << "\n2:DELETE";
        cout << "\n3:EXIST";
        cout << "\nEnter your choice:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the element u want to insert:";
            cin >> x;
            insert(x);
            break;
        case 2:
            y=dlt();
            if (y!=0)
            {
            cout<<"\nDeleted element:"<<y;
            }
            
            break;
        case 3:
            exit(0);
        default:
            cout << "\n..................INVALID CHOICE...................";
            break;
        }
    }
}

void insert(int x)
{
    if (rear==(size-1))
    {
        cout<<"\n..........OVERFLOW...........";
        return;
    }
    else{
        if (rear==-1)
        {
            front++;
        }
        rear++;
        queue[rear]=x;
        return;
    }
}

int dlt()
{
    int x;
    if (front==-1)
    {
        cout<<"\n..........UNDERFLOW..........";
        return 0;
    }
    else{
        x = queue[front];
        if(front>=rear){
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
        return x;
    }
}