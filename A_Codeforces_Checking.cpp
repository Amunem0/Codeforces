#include<bits/stdc++.h>
using namespace std;
string a ="codeforces";
int main(){
    int t;
    cin>>t;
    while(t--){
        char n;
        cin>>n;
        size_t found = a.find(n);
        if(found !=string::npos){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}