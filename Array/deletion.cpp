#include<iostream>
using namespace std;
void dlt(int* a,int& n,int p){
    for (int i = p; i <n; i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
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
    int p;
    cout<<"Enter positon u want to delete:";
    cin>>p;
    dlt(a,n,p+1);
    show_arr(a,n);
}
