#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll n;
        string s;
        cin>>n>>s;
        map<int,int>m;
        if(n>26){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        cout<<s.size()-m.size()<<endl; 
        }
        
}