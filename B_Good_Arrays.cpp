#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int ,int>freq;
        ll a[n];
        ll sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
            sum+=a[i];
        }
        if(sum>=freq[1]+n && n>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}