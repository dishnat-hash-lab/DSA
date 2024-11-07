#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int lomutopartition(int arr[],int l,int h){
    int p=h;//we assume pivot element to be last element always

    int i=l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<=arr[p]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[p]);
    return i+1;//return index of pivot element after partition
}