#include<iostream>
using namespace std;
void show_arr(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}

void insert_sort(int* a,int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j]>a[i])
            {
                int temp=a[i];
                for (int k = i; k > j; k--)
                {
                    a[k]=a[k-1];
                }
                a[j]=temp;
            }  
        }
    }
}
int main(){
    int a[20],n,s;
    cout<<"Enter array length:";
    cin>>n;
    cout<<"Input array:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    insert_sort(a,n);
    show_arr(a,n);
}