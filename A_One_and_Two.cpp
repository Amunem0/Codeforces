#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int c =0;
        cin>>n;
        int a[n];
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            if (a[i] == 2)
            {
                c++;
            }
        }
        if (c%2!=0)
        {
            cout <<-1<< endl;
        }
        else{
            c=c/2;
        for (int i=0;i<n;i++)
        {
            c-=(a[i]==2);
            if (c == 0)
            {
                cout << i + 1 << endl;
                break;
            }
        }
        }
        
    }
}