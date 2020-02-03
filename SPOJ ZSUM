#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

#define mod 10000007

ll bigmod(ll b, ll p, ll m)
{
	if(p == 0) return 1;
	if(p % 2 == 0){
		ll ret = bigmod(b, p/2, m);
		return ((ret%m)*(ret%m))%m;
	}
	else return ((b%m)*bigmod(b, p-1, m))%m;
}

int main(){
	ll n, k;
	while(scanf("%lld %lld", &n, &k) == 2){
		if(n == 0 && k == 0) return 0;
		ll ans = 0;
		ll temp = bigmod(n-1, k, mod);
		ans += temp; ans %= mod;
		ans += temp; ans %= mod;

		temp = bigmod(n-1, n-1, mod);
		ans += temp; ans %= mod;
		ans += temp; ans %= mod;

		temp = bigmod(n, k, mod);
		ans += temp; ans %= mod;

		temp = bigmod(n, n, mod);
		ans += temp; ans %= mod;

		printf("%lld\n", ans);
	}
	return 0;
}
