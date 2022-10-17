#include <bits/stdc++.h>
using namespace std;

class add
{
    int a,b;
    public:
    add(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    
    add operator+(add c)
    {
        return add(a+c.a,b+c.a);
    }
    void display()
    {
        cout<<this->a<<" "<<this->b<<endl;
    }
};
 
int main()
{
    add o(2,3);
    add o2(5,6);
    add o3 = o+o2;
    o3.display();
    return 0;
}