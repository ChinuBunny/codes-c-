/*
   *    i=0 space = 3 star =1  (2*i)-1
  ***  i=1 space = 2 star = 3
 ***** i=2 space =1 star = 5
******* i=3 space =0 star = 7
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        cout<<" ";
        for(int j=0;j<2*i-1;j++)
        cout<<"*";
        cout<<endl;
    }
}