#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n&1){
            if(n==3){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                int a=n/2;
                for(int i=1;i<=n;i++){
                    if(i&1){
                        cout<<a-1<<" ";
                    }
                    else{
                        cout<<-a<<" ";
                    }
                }
                cout<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<n;i++){
                if(i&1){
                    cout<<1<<" ";
                }

                else{
                    cout<<-1<<" ";
                }
            }
            cout<<endl;
        }
        
        
    }
}