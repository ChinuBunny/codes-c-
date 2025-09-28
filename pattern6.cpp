/*
***** i=0 space =0 star = 5
 **** i=1 space =1 star = 4
  *** i=2 space = 2 star = 3
   ** i=3 space =3 star = 2
    * i=4 space= 4 star = 1
*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++)
//         {
//             if(j>=i)
//             cout<<"*";
//             else
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int j=0;j<n-i;j++)
        cout<<"*";
        cout<<endl;
    }
}