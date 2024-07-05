#include<iostream>
using namespace std;
void dlt(int* a,int& n,int s){
    int flag=0;
    for (int i = 0; i <n; i++)
    {
        if (a[i]==s)
        {
            cout<<"POSITION:"<<i+1;
            flag=1;
        }  
    }
    if (flag==0)
    {
        cout<<"NOT FOUND!";
    }
    return;
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
    int s;
    cout<<"Enter Element u want to search:";
    cin>>s;
    dlt(a,n,s);
}
