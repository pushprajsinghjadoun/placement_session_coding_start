#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)  // to pass by reference use &  like &v
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
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }


    // vector<int> v2 = v;   copy the vector  O(n)
    print(v);

}