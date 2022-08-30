#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n = s.size();
    bool r = true;
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            r =false;
            break;
        }
    }
    if(r)
    {
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    return 0;
}