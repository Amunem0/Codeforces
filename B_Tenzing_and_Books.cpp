#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        bool flag=false;
        ll a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        } 
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        c=a[0];
        for(int i=1;i<3*n;i++){
            if(i<n){
                c|=a[i];
                if(c==x)
                flag=true;
            }
            else if(i>=n && i<2*n){
                c=c|a[i];
                if(b[i]|b[i+1]==x)
                flag=true;
            }
            else if(i>=2*n && i<3*n){
                if(c[i]|c[i+1]==x)
                flag=true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}