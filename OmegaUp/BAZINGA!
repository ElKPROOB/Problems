#include <bits/stdc++.h>

using namespace std;

struct ura{
	string Nom,Act;
	int Edad;
	const bool operator<(const ura & otro)const{
		return Edad>otro.Edad;
	}
};

int main()
{
	int n;
	cin>>n;
	ura arre[n];
	for(int i=0;i<n;i++){
		cin>>arre[i].Nom>>arre[i].Edad>>arre[i].Act;
	}
	sort(arre,arre+n);
	for(int i=0;i<n;i++){
		cout<<arre[i].Nom<<" "<<arre[i].Edad<<" "<<arre[i].Act<<"\n";
	}
	return 0;
}