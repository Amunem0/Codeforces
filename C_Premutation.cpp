#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll p[n][n-1];
       for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            cin>>p[i][j];
        }
       }
       vector<ll>v;
       ll ele1=p[0][0];
       ll ele2;
       ll c1=0,c2=0;
       for(int i=1;i<n;i++){
        if(p[i][0]==ele1){
            c1++;
        }
        else{
            ele2=p[i][0];
            c2++;
        }
       }
        if(c1>=c2){
            v.push_back(ele1);
            v.push_back(ele2);
        }
        else{
            v.push_back(ele2);
            v.push_back(ele1);
        }
        for(int i=1;i<n-1;i++){
            for(int j=0;j<n;j++){
                if(v[i]!=p[j][i]){
                    v.push_back(p[j][i]);
                    j=n;
                }
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}