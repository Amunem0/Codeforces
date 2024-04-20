#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        map<char,int>freq;
        string s;
        int start=0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            freq[s[i]]--;
            if(freq[s[i]]== 0){
                start=i;
                break;
            }
        }
         for(;start<s.size();start++){
            cout<<s[start];
            }
            cout<<endl;
        }

    }