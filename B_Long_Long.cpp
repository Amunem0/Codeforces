#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll c=0;
        ll sum=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=abs(a[i]);
            if(a[i]<0 && !flag){
                c++;
                flag=true;
            }
            if(a[i]>0){
                flag=false;
            }
            
        }
    cout<<sum<<" "<<c<<endl;

    }
}