#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int r = a;
    for(int i=1;i<b;i++)
    {
        r = r*a;
    }
    cout<<r<<endl;
    return 0;
}