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

    cout<<"Spiral order "<<endl;
    int rowStart = 0,rowEnd = row-1;
    int colStart =0, colEnd = col-1;

    while(rowStart<=rowEnd && colStart<=colEnd){
        //first row start

        for(int i=colStart;i<=colEnd;i++)
        {
            cout<<"  "<<mat[rowStart][i];
        }
        rowStart++;

        for(int i=rowStart;i<=rowEnd;i++)
        {
            cout<<"  "<<mat[i][colEnd];
        }
        colEnd--;

        for(int i=colEnd;i>=colStart;i--)
        {
            cout<<"  "<<mat[rowEnd][i];
        }
        rowEnd--;

        for(int i=rowEnd;i>=rowStart;i--)
        {
            cout<<"  " << mat[i][colStart];
        }
        colStart++;
    }

}
