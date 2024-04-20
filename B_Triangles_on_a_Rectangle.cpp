#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll w,h;
        cin>>w>>h;
        ll maxo=0;
        for(int i=0;i<4;i++){
            ll k;
            cin>>k;
            ll x,y;
            cin>>x;
            k--;
            while(k--){
                cin>>y;
            }
            if(i<2){
                maxo=max(maxo,(y-x)*h);
            }
            else{
                 maxo=max(maxo,(y-x)*w);
            }

        }
        cout<<maxo<<endl;
        
    }
}