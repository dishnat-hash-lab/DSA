#include <iostream>
using namespace std;

#define size 5
int cqueue[size], front = -1,rear = -1;

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
    if ((front==0 && rear==size-1) || (front-rear)==1 )
    {
        cout<<"\n.........OVERFLOW.........";
        return;
    }
    if (front==-1)
    {
        front++;
    }
    if (rear>=(size-1))
    {
        rear=0;
    }
    else{
        rear++;
    }
    
    cqueue[rear]=x; 
    return ;
}

int dlt()
{
    int x;
    if(front==-1){
        cout<<"\n..........UNDERFLOW...........";
        return 0;
    }
    x=cqueue[front];
    if (front==rear)
    {
        front=-1;
        rear=-1;
    }
    else if (front==(size-1))
    {
        front=0;
    }
    else
    {
        front++;
    }
    
    return x;
}