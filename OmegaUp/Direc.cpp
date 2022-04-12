#include <bits/stdc++.h>
using namespace std;
int mat[1002][1002],fil,col,x,ini,fin,c,y;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>fil>>col;
    for(int i=0;i<fil;i++){
        cin>>mat[i][0];
        for(int j=1;j<col;j++){
            cin>>x;
            mat[i][j]=mat[i][j-1]+x;
        }
    }
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>fil>>col>>ini>>fin;
        fil--;
        col--;
        ini--;
        fin--;
        for(int j=fil;j<=col;j++){
            if(ini-1<0)c+=mat[j][fin];
            else c+=(mat[j][fin]-mat[j][ini-1]);
        }
        y=c/((col-fil+1)*(fin-ini+1));
        cout<<y<<"\n";
        c=0;
    }
}