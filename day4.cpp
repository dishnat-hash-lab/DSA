/*
Question 1: Given a string, determine the number of distinct palindromic substrings of a
specified length.
Inputs:
• A string.
• An integer representing the length of the substrings.
Output:
• The number of distinct palindromic substrings.
Example:
string = "ababa"
length = 3
# Output: 2
*/

// #include<iostream>
// using namespace std;
// #include<string>
// #include <bits/stdc++.h>
// int main(){
//     int count=0;
//     string str;
//     cout<<"\nEnter string:";
//     getline(cin,str);
//     int len,sub_len;
//     len=str.length();
//     cout<<"\nEnter the length of substring:";
//     cin>>sub_len;
//     for (int i = 0; i < len-sub_len; i++)
//     {
//        string sub_str=str.substr(i,sub_len);
//        string rev=sub_str;
//        reverse(rev.begin(),rev.end());
//        if (rev.compare(sub_str)==0)
//        {
//         count++;
//        }
//     }
//     cout<<"\nOUTPUT:"<<count;
// }

/*Frequency of each charachter must be same:*/

#include<iostream>
using namespace std;
#include<string.h>

int main(){
    char str[20];
    cout<<"Enter string:";
    cin>>str;
    int n=strlen(str);
    int freq[20];
    memset(freq,0,20);
    for (int i = 0; i < n; i++)
    {
        freq[str[i]-'a']++;
    }
    int i=1,flag=0;
    while (freq[i]!=0)
    {
        if(freq[i]!=freq[i-1]){
            flag=1;
        }
        i++;
    }
    if(flag==0){
        cout<<"\nVALID";
    }
    else{
        cout<<"\nINVALID";
    }
    
}
