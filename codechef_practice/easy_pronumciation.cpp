#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int con = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='a' and s[i]!='e' and  s[i]!='i' and s[i]!='o' and s[i]!='u')
            {
                con++;
            }else
            {
                con = 0;
            }
            if(con==4) break;
        }
        if(con>=4)
        {
            cout<<"NO"<<endl;
        }else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}