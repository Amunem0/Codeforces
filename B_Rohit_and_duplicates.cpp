#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll n;
        cin>>n;
        vector<int>a;
        int e;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            cin>>e;
            a.push_back(e);
        }
        for(int i=n-1;i>=0;i--){
            if(s.find(a[i]) == s.end()){
                s.insert(a[i]);
            }
        }
        cout<<s.size()<<endl;
        for(auto i : s){
            cout<<i<<" ";
        }
        cout<<endl;
}