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

ll findans(ll n){
	ll num = n;
	ll ans = 1;

	if(num % 2 == 0){
		while(num % 2 == 0) num /= 2;
	}

	ll pkount = 0;
	for(ll i = 3; i*i <= num; i += 2){
		if(num % i == 0){
			while(num % i == 0){
				num /= i;
				pkount++;
			}
			ans *= (pkount+1);
			pkount = 0;
		}
		if(num == 1) break;
	}

	if(num != 1) ans *= 2;

	//if(ans == 1) return 0;
	ans--;
	return ans;
}

int main(){
	ll test;
	scl(test);
	For(i, 1, test+1){
		ll n;
		scl(n);
		ll ans = findans(n);
		printf("Case %lld: %lld\n", i, ans);
	}
	return 0;
}
