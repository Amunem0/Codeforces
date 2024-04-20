#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n=8;
        char s[n][n];
        bool flag=true;
        int c=0;
      for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> s[i][j];
		}
      }

        for(int i=0;i<n;i++){
            for (int j = 0; j < n; j++) {
                if(s[i][j]=='R'){
                    c++;
                }
                else if(c==8){
                    break;
                }
		    }
            if(c==8)break;
            c=0;
        }
        if(c!=8){
            cout<<'B'<<endl;
        }
        else{
            cout<<'R'<<endl;
        }
    }
}