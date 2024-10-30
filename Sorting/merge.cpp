#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;

    vector<int> left;
    vector<int> right;


    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[low+i];
    }
    for (int i = 0; i < n2; i++)
    {
        left[i]=arr[mid+i+1];
    }
    int i,j,r=0;
    
    while (i<n1 && j<n2)
    {
        if(left[i]<right[j]){
            arr[r]=left[i];
            i++;
            r++;
        }
        else{
            arr[r]=right[j];
            j++;
            r++;
        }
    }
    while (i<n1)
    {
        arr[r]=left[i];
        i++;
        r++;
    }
    while (j<n2)
    {
        arr[r]=left[j];
        j++;
        r++;
    }
    

}

void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}