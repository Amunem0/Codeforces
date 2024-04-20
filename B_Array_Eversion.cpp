#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        b[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            b[i]=max(a[i],b[i+1]);
        }
        bool flag=false;
        set<int>st;
        for(int i=0;i<n;i++){
            if(flag==true && b[i]!=mx){
                st.insert(b[i]);
            }
            if(b[i]==mx){
                flag=true;
            }
        }
        cout<<st.size()<<endl;
    }
}