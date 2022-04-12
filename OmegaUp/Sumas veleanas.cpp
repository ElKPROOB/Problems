#include <bits/stdc++.h>
int n,arre[1000000],arre2[1000000],y,z;
using namespace std;
int main()
{
    stack<int> x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arre[i];
    }
    for(int i=0;i<n;i++){
        cin>>arre2[i];
    }
    sort(arre,arre+n);
    sort(arre2,arre2+n);
    reverse(arre2,arre2+n);
    for(int i=n-1;i>=0;i--){
        z=arre[i]+arre2[i]+y;
        if(z>9){
            y=1;
            z=z-10;
            x.push(z);
        }
        else{
            y=0;
            x.push(z);
        }
    }
    if(y==1){
        x.push(y);
    }
    int j=x.size();
    for(int i=0;i<j;i++){
        cout<<x.top();
        x.pop();
    }
    return 0;
}