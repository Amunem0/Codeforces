#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       if(n<10){
        cout<<"NO"<<endl;
       }
       else if(n%3==0){
        cout<<"YES"<<endl;
        cout<<"1 4 "<<n-5<<endl;
       }
       else if(n%3==1){
        cout<<"YES"<<endl;
        cout<<"1 4 "<<n-5<<endl;
       }
       else if(n%3==2){
        cout<<"YES"<<endl;
        cout<<"1 5 "<<n-6<<endl;
       } 
    }
}