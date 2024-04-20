#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        bool flag=true;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
        }
        if(freq[k]==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }  

    }
}