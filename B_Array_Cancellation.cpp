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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll x,pos=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
              x=a[i]+pos;
              if(x>0){
                pos=x;
                a[i]=0;
              }
              else{
                a[i]+=pos;
                pos=0;
              }  
        }
        else{
            pos+=a[i];
        }
        }
        ll res=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<0){
                res+=abs(a[i]);
            }
        }
        cout<<res<<endl;
        
        
        
    }
}