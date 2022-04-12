#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define forn(var, n) for (ui var = 0; var < n; var++)
#define forx(var, value, n) for (ui var = value; var < n; var++)
#define rforn(var, n) for (int var = n; i >= 0; i--)
#define rforx(var, value, n) for (int var = value; i >= n; i--)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define ssort(x) sort(all(x))
#define rsort(x) sort(allr(x))
#define v(type) vector<type>
#define matriz(type) v(v(type))
#define matriz_resize(n, m, type, name) name.resize(n, v(type)(m))
#define p(x, y) pair<x, y>
#define vp(x, y) v(p(x, y))
typedef unsigned int ui;
typedef long long int ll;
typedef unsigned long long int ull;
typedef v(int) vi;
typedef v(ll) vll;
typedef v(ull) vull;
typedef matriz(int) mi;
typedef matriz(bool) mb;
typedef p(int, int) pii;
typedef v(pii) vpii;

int moscas[(int)1e5 +2 ];
int main()
{
    fast;
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n;i++){
        cin >> x >> y;
        moscas[x]++;
        moscas[y]--;
    }
    int suma = 0;
    int moscas_maxi = INT_MIN;
    for (int i = 0; i < 1e5 +2 ;i++){
        suma += moscas[i];
        moscas[i] = suma;
        moscas_maxi = max(moscas_maxi, moscas[i]);
    }
    cout<<moscas_maxi<<'\n';
    bool imprimir = true;
    for (int i = 0; i < 1e5 + 2;i++){
        if(moscas[i]==moscas_maxi && imprimir){
            cout << i<<' ';
            imprimir = false;
        }
        if(moscas[i]!=moscas_maxi && imprimir==false){
            cout << i<<'\n';
            imprimir = true;
        }
    }
    return 0;
}