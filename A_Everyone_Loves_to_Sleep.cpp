#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        bool flag=true;
        int hr[n],mi[n];
        for(int i=0;i<n;i++){
            cin>>hr[i]>>mi[i];
            if(hr[i]==h&&mi[i]==m){
                flag=false;
            }
            
        }
        int ans=24*60;
        if(!flag){
            cout<<"0 0"<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                int time = 60*hr[i]+mi[i]-(60*h+m);
                if(time<0){
                    time+=24*60;
                }
                ans=min(ans,time);
            }
            cout<<ans/60<<" "<<ans%60<<endl;
        }
        

    }
}