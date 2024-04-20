#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int a[n];
        int temp=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int c=0;
        for(int i=1;i<n;i++){
            if(a[i]*a[i-1]==1 && a[i]!=1){
                c=1;
                break;
            }
            else if(a[i]*a[i-1]==-1){
                c=2;
            }
        }
        if(c==0){
            sum-=4;
        }
        else if(c==1){
            sum+=4;
        }
        cout<<sum<<endl;
    }
}