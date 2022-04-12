#include <bits/stdc++.h>
using namespace std;
int arre[10000],cont=2;
int main()
{
	cin>>arre[0]>>arre[1];
	while(true){
		arre[cont]=arre[cont-1]+arre[cont-2];
		if(arre[cont]>=10){
			arre[cont]-=10;
		}
		if(arre[cont]==arre[1] && arre[cont-1]==arre[0]){
			break;
		}
		cont++;
	}
	for(int i=0;i<=cont;i++){
		cout<<arre[i]<<" ";
	}
	cout<<"\n"<<cont-1;
    return 0;
}