
/*
ABCDE
BCDEF
CDEFG
DEFGH
EFGHI
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=65;
    cout<<"enter value of n = ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
        cout<<char(a);
        a++;
    }
    a=65+i+1;
    
        cout<<endl;

    }
   
}