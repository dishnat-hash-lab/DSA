#include<iostream>
using namespace std;
void show_arr(int *a,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}
void merge(int* a,int* b,int m,int n,int* c){
    int p=0,q=0,r=0;
    while (p<m && q<n)
    {
        if (a[p]<b[q])
        {
            c[r]=a[p];
            r++;
            p++;
        }
        else
        {
            c[r]=b[q];
            q++;
            r++;
        }
    }
    if(p>=m){
        while (q<n)
        {
            c[r]=b[q];
            r++;
            q++;
        }
    }
    else
    {
        while (p<m)
        {
            c[r]=a[p];
            p++;
            r++;
        }
    }
    
}
int main(){
    int m,n;
    cout<<"Enter the size of 1st array:";
    cin>>m;
    int a[m];
    cout<<"Input element of 1st array:";
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of 2nd array:";
    cin>>n;
    int b[n];
    cout<<"Input element of end array:";
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int d=m+n;
    int c[d];
    merge(a,b,m,n,c);
    show_arr(c,d);
}