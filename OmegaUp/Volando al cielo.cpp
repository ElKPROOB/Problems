#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,mat[1000][1000];
    cin>>n>>m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        for(int j = 0; j < m; j++)
        {
            int celda=mat[i][j];
            if(i+1<n){
                mat[i][j]=mat[i+1][j]+celda;
                if(j-1>=0){
                    if(mat[i+1][j-1]+celda<mat[i][j]){
                        mat[i][j]=mat[i+1][j-1]+celda;
                    }
                }
                if(j+1<m){
                    if(mat[i+1][j+1]+celda<mat[i][j]){
                        mat[i][j]=mat[i+1][j+1]+celda;
                    }
                }
            }
        }
    }
    int min=mat[0][0];
    for(int j = 0; j < m; j++)
    {
        if(mat[0][j]<min){
            min=mat[0][j];
        }
    }
    cout<<min;
    return 0;
}