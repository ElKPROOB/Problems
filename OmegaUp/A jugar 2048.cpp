#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,pos=0;
    cin>>n;
    int arre[n];
    for(int i=0;i<n;i++){
        cin>>arre[pos];
        while(arre[pos]==arre[pos-1] && pos-1>=0){
			arre[pos-1]=arre[pos]*2;
			pos--;
		}
		pos++;
	}
	cout<<pos<<"\n";
	for(int i=pos-1;i>=0;i--){
		cout<<arre[i]<<"\n";
	}
    return 0;
}