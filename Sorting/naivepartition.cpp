#include<vector>
using namespace std;

void partition(int arr[],int l,int h,int p){
    vector<int> temp;
    int idx=0;
    for (int i = l; i <=h; i++)
    {
        if(arr[i]<=arr[p]&&i!=p)
        temp[idx++];
    }
    temp[idx++]=arr[p];

    for (int i = l; i <=h; i++)
    {
        if(arr[i]>arr[p])
        temp[idx++]=arr[i];
    }
    
    for (int i = l; i <=h ; i++)
    {
        arr[i]=temp[l-i];
    }
    
}