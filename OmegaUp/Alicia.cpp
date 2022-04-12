#include <bits/stdc++.h>

using namespace std;
int n,m,arre[100002],x,z;
int bs(int ini,int fin){
	int med=(ini+fin)/2+1;
	if(ini!=fin){
		if(arre[med]<x) return bs(med,fin);
		else if(arre[med]>x) return bs(ini,med-1);
		else if(arre[med]==x) return med;
	}
	return ini;
}
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arre[i];
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x;
		z=bs(0,n-1);
		if(arre[z]==x) cout<<z+1<<" ";
		else{
			if(arre[n-1]==x) cout<<n<<" ";
			else cout<<0<<" ";
		}
	}
	return 0;
}