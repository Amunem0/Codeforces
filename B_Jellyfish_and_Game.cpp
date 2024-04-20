#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n,m,k;
       cin>>n>>m>>k;
       int a[n];
       int b[n];
       int suma=0;
       int sumb=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
        suma+=a[i];
       }
       for(int i=0;i<m;i++){
        cin>>b[i];
        sumb+=b[i];
       }
    //    cout<<suma<<endl;
    //    cout<<sumb<<endl;
    //    cout<<"***"<<endl;
        sort(a,a+n);
        sort(b,b+m);
        if(n==1 && m==1){
            if(k&1){
                cout<<max(a[0],b[0])<<endl;
            }
            else{
                cout<<min(a[0],b[0])<<endl;
            
            
        }
        else{
            if(k&1){
            suma=suma-a[0]+b[m-1];
            sumb=sumb-b[m-1]+a[0];
            
        }
            else{
            sumb=sumb-b[0]+a[n-1];
            suma=suma-a[n-1]+b[0];
        }
             cout<<suma<<endl;
        
        
    //      cout<<suma<<endl;
    //    cout<<sumb<<endl;
    //    cout<<"***"<<endl;
       
    }
}