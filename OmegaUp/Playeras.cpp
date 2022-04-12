#include <bits/stdc++.h>

using namespace std;
int arre[1000000],arre2[1000000],n,h,a,x,y,z,k,c,r;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>h>>a;
    r=(h*2);
    for(int i=0;i<a;i++){
        cin>>x>>y;
        z=x-y;
        if(z>=1){
        arre[z-1]++;}
        else arre[0]++;
        z=x+y;
        arre[z]--;
    }
    for(int i=0;i<n;i++){
        k+=arre[i];
        if(k!=0)arre2[i]=1;
    }
    for(int i=0;i<n;i++){
        if(arre2[i]==0){
            c++;
            i+=r;
        }
    }
    cout<<c;
    return 0;
}