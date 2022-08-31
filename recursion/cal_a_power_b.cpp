#include <bits/stdc++.h>
using namespace std;

int power(int a ,int b)
{
    if(b==1)
    {
        return a;
    }
    return a*power(a,b-1);
}

// optimized code

int opti(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    int temp = opti(a,b/2);

    if(b%2==0){
        return temp*temp;
    }else{
        return a*temp*temp;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<opti(a,b);
    return 0;
}