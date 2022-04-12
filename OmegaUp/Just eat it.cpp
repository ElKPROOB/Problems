#include <bits/stdc++.h>

using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define v(type) vector<type>
#define forn(var,n) for(int var=0;var<n;var++)
#define forx(var,l,r) for(int var=l;var<=r;var++)
#define rforn(var, n) for (int var = n-1; var >= 0;var--)
#define rforx(var, l, r) for (int var = l; var >= r;var--)
#define all(object) object.begin(), object.end()
#define allr(object) object.rbegin(), object.rend()
#define Csort(object) sort(all(object))
#define Csortr(object) sort(allr(object))
#define p(typeA ,typeB) pair<typeA,typeB>
#define debug                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef long long int lli;
typedef unsigned long long int int64;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	lli n,m,t,t2,arre[100002];
	bool p=false;
	cin>>n;
	forn(i,n){
		t=0;
		p=false;
		cin>>m;
		forn(j,m){
			cin>>arre[j];
			t+=arre[j];
		}
		if(arre[0]<=0 or arre[m-1]<=0){
			p=true;
			cout<<"NO\n";
		}
		if(p==false){
			t2=t;
			forn(j,m){
				t2-=arre[j];
				if(t2>=t){
					cout<<"NO\n";
					p=true;
					break;
				}
			}
		}
		if(p==false){
			t2=t;
			rforn(j,m){	
				t2-=arre[j];
				if(t2>=t){
					cout<<"NO\n";
					p=true;
					break;
				}
			}
		}
		if(p==false) cout<<"YES\n";
	}
	return 0;
}