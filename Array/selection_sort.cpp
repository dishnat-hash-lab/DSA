#include<iostream>
using namespace std;
void show_arr(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
void sel_sort(int* a,int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
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
    sel_sort(a,n);
    show_arr(a,n);
}