#include <bits/stdc++.h>
using namespace std;

void permu(string s,int j)
{
    if(s.size()-1==j)
    {
        cout<<s<<endl;
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        swap(s[i],s[j]);
        permu(s,j+1);
        swap(s[i],s[j]);
    }
}

int main()
{
    permu("ABC",0);
    return 0;
}