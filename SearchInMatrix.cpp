#include<bits/stdc++.h>
using namespace std;

int main()
{
      int row,col;
    cout<<"Enter Row And COlumn:";
    cin>>row>>col;

    int mat[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>mat[i][j];
        }
        cout<<endl;
    }

    cout<<"Matrix:"<<endl;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"  "<<mat[i][j];
        }
        cout<<endl;
    }
    cout<<" Enter Element for Search:";

    int terget;
    cin>>terget;

    bool found = false;

    int r=0,c=col-1;

    while(r<row && c>=0)
    {
        if(mat[r][c]==terget)
        {
            found=true;
        }
        mat[r][c]>terget ? c-- : r++;
    }
    if(found)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";

    }
}
