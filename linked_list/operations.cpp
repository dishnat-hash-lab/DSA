#include <iostream>
using namespace std;

struct linked_list
{
    int info;
    linked_list *next;
};

typedef struct linked_list node;
node *first = NULL;
void insert_start(int);
void insert_end(int);
void insert_btw(int,int);
void dlt(int);
void traversal();

int main()
{
    while (1)
    {
        int ch, x, y,p;
        cout << "\nlinked operations:";
        cout << "\n1:INSERT";
        cout << "\n2:DELETE";
        cout << "\n3:TRAVERSAL";
        cout << "\n4:EXIST";
        cout << "\nEnter your choice:";
        cin >> ch;
        cout<<"\n.........................................................."<<endl;

        switch (ch)
        {
        case 1:
            cout << "\nWhich type of insertion u want to perform:";
            cout << "\n1:INSERT AT BEGIN";
            cout << "\n2:INSERT AT END";
            cout << "\n3:INSERT AT SPECIFIC POSITION";
            cout << "\nEnter your choice:";
            cin >> y;
            if (y == 1)
            {
                cout << "\nENTER THE ELEMENT U WANT TO ENTER:";
                cin >> x;
                insert_start(x);
            }
            else if (y == 2)
            {
                cout << "\nENTER THE ELEMENT U WANT TO ENTER:";
                cin >> x;
                insert_end(x);
            }
            else if (y == 3)
            {
                cout << "\nENTER THE ELEMENT U WANT TO ENTER:";
                cin >> x;
                cout<<"\nENTER THE POSITION U WANT TO INSERT:";
                cin>>p;
                insert_btw(x,p);
            }
            else
            {
                cout << "\n............INVALID CHOICE...............";
            }
            break;
        case 2:
            cout<<"\nENTER THE ELEMENT U WANT TO DELETE:";
            cin>>x;
            dlt(x);
            break;
        case 3:
            traversal();
            break;
        case 4:
            exit(0);
        default:
            cout << "\n..................INVALID CHOICE...................";
            break;
        }
    }
}

void insert_start(int x)
{
    node *nw;
    nw = (node *)malloc(sizeof(node));
    nw->info = x;
    nw->next = first;
    first = nw;
}

void insert_end(int x)
{
    node *nw, *ptr = first;
    nw = (node *)malloc(sizeof(node));
    nw->info = x;
    if (first == NULL)
    {
        nw->next = first;
        first = nw;
        return;
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = nw;
        nw->next = NULL;
        return;
    }
}
void insert_btw(int x,int p){
    node *nw, *ptr = first;
    nw = (node *)malloc(sizeof(node));
    nw->info = x;
    while (ptr->info!=p)
    {
        ptr=ptr->next;
    }
    nw->next=ptr->next;
    ptr->next=nw;
    return;
}
void dlt(int x){
    node *prev=first,*p;
    if(first==NULL){
        cout<<".........UNDERFLOW...........";
        return;
    }
    else if(prev->info==x){
        first=first->next;
        free(prev);
    }
    else{
    while (prev->info!=x)
    {
        p=prev;
        prev=prev->next;
    }
    p->next=prev->next;
    free(prev);
    return;
    }
}
void traversal()
{
    node *ptr = first;
    while (ptr != NULL)
    {
        cout << "\t" << ptr->info;
        ptr = ptr->next;
    }
}