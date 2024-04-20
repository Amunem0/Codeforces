#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
             cin>>a[i];
        }
        for(int i=0;i<n;i++){
             cin>>b[i];
        }
        int x=0,y=0;
        for(int i=0;i<n;i++){
             if(a[i]==1 && b[i]==0){
                x++;
             }
             if(a[i]==0 && b[i]==1){
                y++;
             }
        }
        if(x==0){
                cout<<-1<<endl;
             }
        else{
                y++;
                int ans=y/x;
                if(y%x!=0){
                    ans++;
                }
                cout<<ans<<endl;
            }     
}
