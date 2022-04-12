#include <bits/stdc++.h>

using namespace std;
int k,arre[12],c,s;
bool HJJ;
int main() {
	cin>>k;
	for(int i=0;i<12;i++){
		cin>>arre[i];
	}
	sort(arre,arre+12);
	if(k==0) cout<<0;
	else{
		for(int i=11;i>=0;i--){
			c++;
			s+=arre[i];
			if(s>=k) {
				HJJ=true;
				break;	
			}
		}
		if(HJJ==true){
			cout<<c;
		}
		else cout<<-1;
	}
	return 0;
}