#include<iostream>
using namespace std;

void insert(int* a,int& n,int p,int e){
    for (int i = n; i >= p; i--)
    {
        a[i+1]=a[i];
    }
    a[p]=e;
    n=n+1;
    return;
}
void show_arr(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}
int main(){
    int a[20],n;
    cout<<"Enter array length:";
    cin>>n;
    cout<<"Input array:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int p,e;
    cout<<"Enter positon and element u want to insert:";
    cin>>p>>e;
    insert(a,n,p-1,e);
    show_arr(a,n);
}