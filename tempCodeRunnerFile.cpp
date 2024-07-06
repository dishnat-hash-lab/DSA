#include<iostream>
using namespace std;

void change(int* a){
    for (int i = 0; i < 4 ; i++)
    {
        cout<<"\t"<<a[i];
    }
    
}
int main(){
    int n=0;
    int a[4]={0,0,0,0};
    change(a);
    cout<<n;
}