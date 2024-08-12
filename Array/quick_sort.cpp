#include<iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int partition(int *a,int low,int high){
    int pivot=a[high];
    int i=low-1;
    for (int j = low; j < high; j++)
    {
        if (a[j]< pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[high]);

    return i;
    
}
void quik_sort(int *a,int low,int high){
    if (low<high){
        int pidx=partition(a,low,high);

        quik_sort(a,low,pidx-1);
        quik_sort(a,pidx+1,high);
    }
}
int main(){
    int n;
    cout<<"Enter the size of array u wan to sort:";
    cin>>n;
    int a[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    quik_sort(a,0,n-1);

    cout<<"sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }

}