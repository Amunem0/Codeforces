#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        bool v[n+1]={false};
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>temp;
        unordered_map<int,int>mp;
        for(int i=0;i<n-1;i++){
            if(mp[a[i]]){
                a[i]=0;
            }
            if(mp[a[i+1]]){
                a[i+1]=0;
            }
            
            temp.push_back(a[i]);
            if(a[i]>a[i+1]){
                while(temp.size()){
                    mp[temp.back()]++;
                    temp.pop_back();
                }
            }
        }
        int ans=0
        for(auto i:mp){
            if(i.second && i.first!=0){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
}