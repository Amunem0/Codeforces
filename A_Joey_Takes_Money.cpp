#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll product=1;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            product=product*a[i];
        }
     
     cout<<(product+n-1)*2022<<endl;
    }
}