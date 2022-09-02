#include <bits/stdc++.h>
using namespace std;

int co = 0;

bool issafe(vector<vector<bool>> &grid,int row,int col, int n)
{
    for(int i=row-1;i>=0;i--)
    {
        if(grid[i][col]==true)
        {
            return false;
        }
    }
    for(int i= row-1,j = col-1;i>=0 and j>=0;i--,j--)
    {
        if(grid[i][j])  return false;
    }
    for(int i= row-1, j=col+1;i>=0 and j<n;i--,j++)
    {
        if(grid[i][j]) return false;
    }
    return true;
}

void display(vector<vector<bool>> &grid,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j])
            {
                cout<<"Q ";
            }else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
}

void countq(vector<vector<bool>> &grid,int curr_row,int n)
{
    if(curr_row==n)
    {
        co++;
        display(grid,n);
        cout<<endl<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(issafe(grid,curr_row,i,n))
        {
            grid[curr_row][i] = true;
            countq(grid,curr_row+1,n);
            grid[curr_row][i] = false;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<vector<bool>> grid(n,vector<bool>(n,false));
    countq(grid,0,n);
    cout<<co<<endl;
    return 0;
}