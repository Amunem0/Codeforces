#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        ll x=0;
        ll l;
        l=k/2;
        if(k%2==0){
            x=(k/2)*(a-b);
        }
        else{
            x=k/2*(a-b)+a;
        }
    cout<<x<<endl;
    }
}