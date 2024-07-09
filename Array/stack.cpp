#include <iostream>
using namespace std;

#define size 5
int stack[size], top = -1;

void push(int);
int pop();

int main()
{
    while (1)
    {
        int ch, x, y;
        cout << "\nStack operations:";
        cout << "\n1:PUSH";
        cout << "\n2:POP";
        cout << "\n3:EXIST";
        cout << "\nEnter your choice:";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the element u want to add:";
            cin >> x;
            push(x);
            break;
        case 2:
            y = pop();
            if (y != NULL)
            {
                cout << "\n...............DELETED ELEMENT:" << y<<"....................";
            }
            else
                cout << "\n.......UNDERFLOW..........";
            break;
        case 3:
            exit(0);
        default:
            cout << "\n..................INVALID CHOICE...................";
            break;
        }
    }
}

void push(int x)
{
    if (top >= size)
    {
        cout << "\n......OVERFLOW......";
        return;
    }
    else
    {
        top++;
        stack[top] = x;
        return;
    }
}

int pop()
{
    if (top == -1)
    {
        return NULL;
    }
    else
    {
        int x = stack[top];
        top--;
        return x;
    }
}