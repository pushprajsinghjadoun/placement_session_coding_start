#include <bits/stdc++.h>
using namespace std;

void pri(string s,string ss)
{
    if(s.size()==0)
    {
        cout<<ss<<endl;
        return;
    }
    unordered_set<char> sss;
    for(int j=0;j<s.size();j++)
    {
        char ch = s[j];
        if(sss.count(ch)==0)
        {
            string ros = s.substr(0,j)+ s.substr(j+1);
            sss.insert(ch);
            pri(ros,ss+ ch);
        }
    }
}


int main()
{
    pri("AAC","");
    return 0;
}