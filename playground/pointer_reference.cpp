#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val = 13;
    int &k = val;
    int t = val;
    val = 15;
    int * ptr = &k;
    cout<<t<<" "<<k<<endl;
    cout<<&t<<" "<<ptr<<endl;
    return 0;
}