#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> v;
    // vector<int> v(10);
    // vector<int> v(10, 3);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    print(v);

}