#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())  cout<<"False";
    else{
         string temp = s1+s1; 
         if(temp.find(s2)!=string::npos)
         {cout<<"True";}else{ cout<<"False";}
        }


    return 0;
}