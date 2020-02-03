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

#define maxi 5000000
#define intmax 2147483646


ll prime[maxi+2];
bool mark[86028157] = {false};

void sieve(){
	prime[0] = 2;
	ll index = 1;

	for(ll i = 3; i*i <= 86028157; i += 2){
		if(mark[i] == false){
			for(ll j = i*i; j <= 86028157; j += i + i){
				mark[j] = true; ///composite marks are true
			}
		}
	}

	for(ll i = 3; i <= 86028157; i += 2){
		if(mark[i] == false) prime[index++] = i;
	}
}

int main(){
	sieve();
	ll test;
	scl(test);
	while(test--){
		ll q;
		scl(q);
		printf("%lld\n", prime[q-1]);
	}
}
