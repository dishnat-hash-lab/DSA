#include <iostream>
using namespace std;

struct doubly_list
{
    doubly_list *lptr;
    int info;
    doubly_list *rptr;
};

typedef doubly_list node;

node *first = NULL;
node *last = NULL;

void insert_begin(int);
void insert_end(int);
void insert_at(int, int);
void dlt(int);
void traversal_from_last();
void traversal_from_first();

int main()
{
    int ch, x, y, p;
    while (1)
    {
        cout << "\n..................................................................\n";
        cout << "\n1.INSERT";
        cout << "\n2.DELETE";
        cout << "\n3.TRAVERSAL";
        cout << "\nENTER THE OPERTION U WANT TO PERFORM:";
        cin >> ch;
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
                insert_begin(x);
            }
            else if (y == 2)
            {
                cout << "\nENTER THE ELEMENT U WANT TO ENTER:";
                cin >> x;
                insert_end(x);
            }
            else if (y == 3)
            {
                cout << "\nENTER THE POSITION:";
                cin >> p;
                cout << "\nENTER THE ELEMENT U WANT TO ENTER:";
                cin >> x;
                insert_at(x, p);
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
            cout << "\n1.TRAVERSAL FROM THE BEGINNING";
            cout << "\n2.TRAVERSAL FROM THE END";
            cout << "\nENTER WHICH TYPEOF TRAVERSAL U WANT TO PERFORM:";
            cin >> y;
            if (y == 1)
            {
                traversal_from_first();
            }
            else
            {
                traversal_from_last();
            }
            break;
        default:
            break;
        }
    }
}

void insert_begin(int x)
{
    node *nw;
    nw = (node *)malloc(sizeof(node));
    nw->info = x;
    if (last == NULL)
    {
        nw->rptr = NULL;
        nw->lptr = NULL;
        first = nw;
        last = nw;
        return;
    }
    nw->rptr = first;
    nw->lptr = NULL;
    first->lptr = nw;
    first = nw;
    return;
}
void insert_end(int x)
{
    node *nw;
    nw = (node *)malloc(sizeof(node));
    nw->info = x;
    if (first == NULL)
    {
        nw->rptr = NULL;
        nw->lptr = NULL;
        first = nw;
        last = nw;
        return;
    }
    nw->lptr = last;
    nw->rptr = NULL;
    last->rptr = nw;
    last = nw;
    return;
}
void insert_at(int x, int p)
{
    node *nw, *ptr;
    nw = (node *)malloc(sizeof(node));
    nw->info = x;
    ptr = first;
    if (last == NULL)
    {
        nw->rptr = NULL;
        nw->lptr = NULL;
        first = nw;
        last = nw;
        return;
    }
    while (ptr->info != p)
    {
        ptr = ptr->rptr;
    }
    if (ptr == first)
    {
        nw->rptr = first;
        nw->lptr = NULL;
        first->lptr = nw;
        first = nw;
        return;
    }
    else if (ptr == last)
    {

        nw->lptr = last;
        nw->rptr = NULL;
        last->rptr = nw;
        last = nw;
        return;
    }
    nw->lptr = ptr->lptr;
    nw->rptr = ptr;
    (ptr->lptr)->rptr = nw;
    ptr->lptr = nw;
    return;
}
void dlt(int x){
    node *ptr;
    ptr=first;
    if (first==NULL)
    {
        cout<<"\n..............UNDERFLOW.................";
    }
    
    if (ptr->info==x)
    {
        if (ptr->rptr==NULL)
        {
            first=NULL;
            last=NULL;
            free(ptr);
            return;
        }
        (ptr->rptr)->lptr=NULL;
        first=ptr->rptr;
        free(ptr);
        return;
    }
    while (ptr->info != x)
    {
        ptr = ptr->rptr;
    }    
    if (ptr->rptr==NULL)
    {
        (ptr->lptr)->rptr=NULL;
        last=ptr->lptr;
        free(ptr);
        return;
    }
    (ptr->lptr)->rptr=ptr->rptr;
    (ptr->rptr)->lptr=ptr->lptr;
    return;
}
void traversal_from_first()
{
    node *ptr;
    ptr = first;
    if (ptr==NULL)
    {
        cout<<"\n...............UNDERFLOW...................";
    }
    
    while (ptr != NULL)
    {
        cout << "\t" << ptr->info;
        ptr = ptr->rptr;
    }
    return;
}

void traversal_from_last()
{
    node *ptr;
    ptr = last;
    if (ptr=NULL)
    {
        cout<<"\n...............UNDERFLOW...................";
    }
    
    while (ptr != NULL)
    {
        cout << "\t" << ptr->info;
        ptr = ptr->lptr;
    }
    return;
}
