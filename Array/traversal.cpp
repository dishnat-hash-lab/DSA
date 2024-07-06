#include<iostream>
using namespace std;
void show_arr(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}
int main(){
    int a[20],n;
    cout<<"Enter total number of entries:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    show_arr(a,n);
}