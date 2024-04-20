#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=b;
        for(int i=0;i<n;i++){
            ans+=min(a-1,arr[i]);
        }
        cout<<ans<<endl;
        }
        
    }