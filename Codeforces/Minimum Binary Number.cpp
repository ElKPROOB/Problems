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
	int n,un=0,ce=0;
	string a;
	cin>>n>>a;
	forn(i,n){
		if(a[i]=='0'){
			ce++;
		}
		else{
			un++;
		}
	}
	if(un>0) cout<<"1";
	forn(i,ce){
		cout<<"0";
	}
	return 0;
}