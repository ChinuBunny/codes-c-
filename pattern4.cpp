#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=n-1)
            cout<<"*";
            else
                cout<<" ";
            
        }
        cout<<endl;
    }
}
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for(int i=0; i<n; i++) {
//         // print spaces
//         for(int j=0; j<n-i-1; j++) {
//             cout << " ";
//         }
//         // print stars
//         for(int j=0; j<=i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


/*

     * i=0 star =1 , space = 5
    ** i=1 star =2 , space= 4
   *** i=2 star = 3, space= 3
  **** i=3 star = 4, space =2
 ***** i=4 star = 5, space= 1
****** i=5 star = 6, space =0 

00 01 02 03 04 
10 11 12 13 14
20 21 22 23 24
30 31 32 33 34
40 41 42 43 44

*/