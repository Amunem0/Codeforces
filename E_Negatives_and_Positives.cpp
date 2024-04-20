#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       int c=0;
       int sum=0;
       int mini=LLONG_MAX;
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0){
            c++;
        }
        mini=min(mini,abs(a[i]));
        sum+=abs(a[i]);
       }
    //    for(int i=0;i<n;i++){
    //     cout<<a[i];
    //    } 
    //    cout<<endl;
       if(c%2==1){
            sum-=(2LL*mini);
       }
        cout<<sum<<endl;
       
    }
}