#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%400==0)
    {
        cout<<n<<" is a leap year";
    }else if(n%100==0)
    {
        cout<<n<<" is a not leap year";
    }else if(n%4==0)
    {
        cout<<n<<" is a leap year";
    }else
    {
        cout<<n<<" is not a leap year";
    }
    return 0;
}