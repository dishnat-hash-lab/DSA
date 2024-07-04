/*
Question 1: A function to determine if a given sentence includes every letter of the English
alphabet at least once. The function should be case insensitive and return "complete" if the
sentence contains every letter, otherwise return "incomplete".
*/

#include<iostream>
using namespace std;
#include <string.h>
void ispangram(string x){
    int len=x.length();
    int count=0;
    for(int i=65;i<=65+26;i++){
        for (int j = 0; j < len; j++)
        {
            char y=toupper(x[j]);
            if( i==int(y)){
                count++;
                break;
            }
        }
    }
    if(count==26){
        cout<<"complete";
    }
    else if(count>25){
        cout<<"bsdk code check kr";
    }
    else{
        cout<<"incomplete";
    }
    
}
int main(){
    string str;
    cout<<"\nEnter string:";
    getline(cin,str);
    ispangram(str);
}

/*
Question 2: Create a function to check if reversing the ASCII values of a string results in the
same sequence when read backward. If true, return "symmetrical", otherwise return "not
symmetrical".
Inputs:
• A string.
Output:
• "symmetrical" if the string meets the criteria, otherwise "not symmetrical".
*/

#include<iostream>
using  namespace std;
#include<string>

int main(){
    string str;
    cout<<"Input string:";
    
}