#include <bits/stdc++.h>
using namespace std;

void swap(string *s1,string *s2)
{
    string * temp = s1;
    s1 = s2;
    s2 = temp;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    swap(s1,s2);
    cout<<s1<<"  "<<s2;
    return 0;
}