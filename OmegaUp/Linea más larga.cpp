#include <bits/stdc++.h>

using namespace std;
int a,d,e,f,g,h=1;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a;
    a++;
    int b[a];
    b[0]=300;
    for (int i=1;i<a;i++){
        cin>>b[i];
        if (b[i]==2){
            d++;
            if (e==0){
                if (b[i-1]==0 && h==1) {
                    e++;
                    h--;
                    }
            }
        }
        else if (b[i]==1){
            g++;
            d=0;
            e=0;
            h=1;
        }
        else if (b[i]==0){
            if (b[i-1]==2){
                if (e==0 && h==1) {e++;
                h--;}

                else {
                    e=0;
                    d=0;
                    h=1;
            }
            }
            else {
                e=0;
                d=0;
                h=1;
            }
        }
    if ((d+e)>f)f=d+e;
    }
    if (f==0 && g!=a-1)f++;
    cout<<f;
    return 0;
}