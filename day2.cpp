/*
Question 1: A professor has a class of students and wants to know if the class should be
cancelled based on student arrival times. The class is cancelled if fewer than a threshold number
of students arrive on time.
Inputs:
• An integer representing the threshold number of students.
• An array of integers representing arrival times, where a non-positive integer indicates ontime arrival.
Output:
• "YES" if the class is cancelled, "NO" otherwise.
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int th,n,count=0;
//     cout<<"\nEnter the threshold number of student:";
//     cin>>th;
//     cout<<"\nEnter number of students:";
//     cin>>n;
//     int a[n];
//     cout<<"\nInput array of arrival time:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(a[i]<0){
//             count++;
//         }
//     }
//     if (count<th)
//     {
//         cout<<"\nYES";
//     }
//     else{
//         cout<<"\nNO";
//     }
// }

/*
Question 2: A player is climbing a leaderboard where scores are ranked in descending order.
Given the scores on the leaderboard and the player's scores in the game, determine the player's
rank after each new score.
Inputs:
• An array of integers representing the leaderboard scores.
• An array of integers representing the player's scores.
Output:
• An array of integers representing the player's rank after each new score.
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int h,n;
//     cout<<"\nEnter total number of entries in leaderboard:";
//     cin>>h;
//     int ld[h];
//     cout<<"\nInput array leaderbord:";
//     for (int i = 0; i < h; i++)
//     {
//         cin>>ld[i];
//     }
//     cout<<"\nEnter total number of players:";
//     cin>>n;
//     int a[n],r[n];
//     cout<<"\nInput array player's score:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     for (int i = 0; i<n; i++)
//     {
//         for (int j = h-1; j >=0; j--)
//         {
//             if (ld[j]>a[i])
//             {
//                 r[i]=j+1;
//                 break;
//             }
//             else{
//                 r[i]=1;
//             }
//         }  
//     }
//     cout<<"\nArray of player rank :";
//     for (int k = 0; k < n; k++)
//     {
//         cout<<"\t"<<r[k];
//     }
// }