#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=0,r=0;
        string a;
        cin>>a;
        for(int i=0;i<n;i++){
            if(a[i]=='L'){
                l++;
            }
            else{
                r++;
            }
        }
        if(l==n || r==n){
            cout<<-1<<endl;
        }
        else{
            for (int i = 0; i < n; i++)
            {
                if(a[i+1]=='R' && a[i]=='L'){
                    cout<<i+1<<endl;
                    break;
                }
                else if(a[i+1]=='L' && a[i]=='R'){
                    cout<<0<<endl;
                    break;
                }
            }
            
        }
        
    }
}