/*
***** n=0 star=5 space =0
**** n=1 star = 4 space =1
*** n=2 star = 3  space =2
** n=3 star = 2 space =3
* n=4 star = 1 space =4
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i+j<n)
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
        for(int j=n;j>i;j--)
        cout<<"*";
        cout<<endl;
    }
}