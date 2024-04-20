#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int sum=0;
        if(x>=k && n>=k || x==1){
            for(int i=0;i<n;i++){
                if(i<k){
                    sum+=i;
                }
                
                else if(i>=k){
                    if(k==x){
                        sum+=x-1;
                    }
                    else{
                        sum+=x;
                    }
                    
                }
            }
            cout<<sum<<endl;
            
        }
        else{
            cout<<-1<<endl;
        }
    }
}