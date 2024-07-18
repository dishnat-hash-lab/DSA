#include <iostream>
using namespace std;
struct cirular_linked_list
{
    int info;
    cirular_linked_list *next;
};

typedef struct cirular_linked_list node;

int main()
{
    node *head, *nw, *ptr, *prev;
    head = (node *)malloc(sizeof(node));
    head->info = 0;
    head->next = NULL;
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
                if (head->next == NULL)
                {
                    nw = (node *)malloc(sizeof(node));
                    nw->info = x;
                    nw->next = head;
                    head->next = nw;
                }
                else
                {
                    nw = (node *)malloc(sizeof(node));
                    nw->info = x;
                    nw->next = head->next;
                    head->next = nw;
                }
            }
            else if (y == 2)
            {
                cout << "\nENTER THE ELEMENT U WANT TO ENTER:";
                cin >> x;
                if (head->next == NULL)
                {
                    nw = (node *)malloc(sizeof(node));
                    nw->info = x;
                    nw->next = head;
                    head->next = nw;
                }
                else
                {
                    ptr = head->next;
                    nw = (node *)malloc(sizeof(node));
                    nw->info = x;
                    nw->next = head;
                    while (ptr->next != head)
                    {
                        ptr = ptr->next;
                    }
                    ptr->next = nw;
                }
            }
            else if (y == 3)
            {
                cout << "\nENTER THE ELEMENT U WANT TO ENTER:";
                cin >> x;
                cout << "\nENTER THE POSITION U WANT TO INSERT:";
                cin >> p;
                nw = (node *)malloc(sizeof(node));
                nw->info = x;
                while (ptr->info != p)
                {
                    ptr = ptr->next;
                }
                nw->next = ptr->next;
                ptr->next = nw;
            }
            else
            {
                cout << "\n............INVALID CHOICE...............";
            }
            break;
        case 2:
            cout << "\nENTER THE ELEMENT U WANT TOT DELETE:";
            cin >> x;
            prev = head->next;
            if (prev == NULL)
            {
                cout << "..............UNDERFLOW......................";
            }
            else if (prev->info == x)
            {
                head->next = prev->next;
                free(prev);
            }

            else{
                while (prev->info!=x)
                {
                    ptr=prev;
                    prev=prev->next;
                }
            ptr->next = prev->next;
            free(prev);
            }
            break;
        case 3:
            ptr = head->next;
            if (ptr == NULL)
            {
                cout << ".................UNDERFLOW.....................";
                break;
            }

            while (ptr->info != 0)
            {
                cout << "\t" << ptr->info;
                ptr = ptr->next;
            }
            break;
        default:
            cout << "\n................INVALID CHOICE.................";
            break;
        }
    }
}
