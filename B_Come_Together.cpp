#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll xa,ya,xb,yb,xc,yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        ll a=1;
        if((xb>xa && xc>xa) ||(xb<xa && xc<xa)){
                a+=min(abs(xb-xa),abs(xc-xa));
        }
        if((yb>ya && yc>ya) ||(yb<ya && yc<ya)){
                 a+=min(abs(yb-ya),abs(yc-ya));
        }
        cout<<a<<endl;
    }
}