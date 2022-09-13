#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int res=0;
	    for(int i=0,val;i<n;i++)
	    {
	        cin>>val;
	        res^=val;
	    }
	    cout<<res<<endl;
	}
	return 0;
}