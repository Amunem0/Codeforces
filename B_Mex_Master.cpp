#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        bool flag=false;
        for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==0){
            sum++;
          }
          else if(a[i]>=2){
            flag=true;
          }  
        }
        if(sum<=(n+1)/2){
          cout<<0<<endl;
        }
        else if(sum==n||flag){
          cout<<1<<endl;
        }
        else{
          cout<<2<<endl;
        }

    }
}