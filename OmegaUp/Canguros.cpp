#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);
	queue<int> cang;
	int c,n,canp,cant;
	char l;
	cin>>c>>n;
	for(int i=0;i<n;i++){
		cin>>l;
		if(l=='N'){
			cin>>canp;
			canp++;
			cang.push(canp);
		}
		else if(l=='A'){
			cant=cang.front();
			cang.pop();
			c-=cant;
		}
		else if(l=='C'){
			cout<<cang.size()<<"\n";
		}
		else if(l=='R'){
			cout<<c<<"\n";
		}
	}
}