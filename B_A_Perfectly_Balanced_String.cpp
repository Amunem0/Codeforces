#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
# define M_PI  3.14159265358979323846
    void solve (){
       set<char>diff;
		string s;cin>>s;
		for(auto i:s) {
			diff.insert(i);
		}
		int ok=1;
		for(int i=0;i<s.size();i++) {
			if(s[i]!=s[i%(int)diff.size()]) ok=0;
		}
		cout<<(ok ? "YES":"NO")<<"\n";
    }
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        cout<<fixed;
        cout<<setprecision(10);
//        freopen("timber_input.txt", "r", stdin);
//        freopen("timber_output.txt", "w", stdout);
        int t=1;
        cin>>t;
        for(int i=1;i<=t;i++){
//            cout<<"Case #"<<i<<": ";
            solve();
        }
        return 0;
    }