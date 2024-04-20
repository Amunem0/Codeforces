#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,h;
        cin>>n>>h;
        ll a[n];
        ll c=0;
        for(int i=0;i<n;i++){
             cin>>a[i];
        }
       sort(a,a+n,greater<int>());
       ll sum=(h/(a[0]+a[1]));
       h-=sum*(a[0]+a[1]);
       if(h==0){
        cout<<2*sum<<endl;
       }
       else if(h<=a[0]){
        cout<<2*sum+1<<endl;
       }
       else{
        cout<<2*sum+2<<endl;
       }
    }
}
