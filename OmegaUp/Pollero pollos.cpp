#include <bits/stdc++.h>

using namespace std;
long long int p,c,b,arre[1000000];
int main()
{
    cin>>p>>b;
    for(int i=0;i<p;i++){
        cin>>arre[i];
    }
    sort(arre,arre+p);
    for(int i=0;i<p;i++){
        for(int j=i;j<p-1;j++){
            if(arre[i]+arre[j+1]<=b) c++;
        }
    }
    cout<<c;
    return 0;
}