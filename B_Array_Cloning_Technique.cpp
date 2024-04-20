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
       int maxa=INT_MIN;
       map<int ,int> freq;
       for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
        maxa=max(maxa,freq[a[i]]);
       }
       if(maxa==n){
        cout<<0<<endl;
       }
       else{
        int c=1;
        while(maxa<=n){
            if(2*maxa>=n){
                c+=(n-maxa);
                break;
            }
            c+=maxa;
            maxa*=2;
            c++;
        }
        cout<<c<<endl;
       }


       
    }
}