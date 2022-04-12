#include <iostream>

using namespace std;

int a,b,d,e,f,g;
int c[100][100];
int main()
{
    cin>>a>>b;
    cin>>d;
    for (int i=0;i<d;i++){
        cin>>e>>f;
        c[e-1][f-1]+=1;
    }
    for (int j=0;j<a-1;j++){
        for(int k=0;k<b-1;k++){
            if((c[j][k]+c[j+1][k]+c[j][k+1]+c[j+1][k+1])==0){
                g+=1;
            }
        }
    }
    cout<<g;
    return 0;
}