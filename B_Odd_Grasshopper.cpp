#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
       ll x,n;
        cin>>x>>n;
        ll y=n%4;
        ll z=0;
        if(y==0){
            
        }
        else if(y==1){
            z-=n;
        }
        else if(y==2){
            z=1;
        }
        else if(y==3){
            z=n+1;
        }

        if(x&1){
            cout<<x-z<<endl;
        }
        else{
            cout<<x+z<<endl;
        }
    }
}