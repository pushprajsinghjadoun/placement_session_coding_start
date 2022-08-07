#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int,int>> &v)  // to pass by reference use &  like &v
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second;
    }
}

int main()
{
   // vector<pair<int,int>> v = {{{1,2}, {3,4}, {5,6}, {7,8}}};
    //print(v);

    vector<int> v[10];  // vector of array
    
}