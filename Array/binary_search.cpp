#include<iostream>
using namespace std;
void bin_search(int* a,int n,int s){
    int f=0;
    int l=n-1;
    int mid=(f+l)/2;
    while (f<=l && s!=a[mid])
    {
        if(s<a[mid]){
            l=mid-1;
        }
        else{
            f=mid+1;
        }
        mid=(f+l)/2;
    }
    if (s==a[mid])
    {
        cout<<"POSITION:"<<mid+1;
    }
    else{
        cout<<"NOT FOUND";
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
    cout<<"Enter the element u want to search:";
    cin>>s;
    bin_search(a,n,s);
}