#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define maxnum 1000005

ll mark[maxnum]; ///koyta prime factor ache tar mark
ll cumkount[11][maxnum]; ///proti row te koyta r_i songkhok
						///prime factor wala num pawa jacche tar cumsum

void sieve_cumkount(){
	for(ll i = 2; i <= maxnum; i += 2) mark[i]++;
	for(ll i = 3; i <= maxnum; i += 2)
		if(mark[i] == 0)
			for(ll j = i; j <= maxnum; j += i) mark[j]++;

	for(ll i = 0; i < 11; i++){
		for(ll j = 1; j <= maxnum; j++){
			if(mark[j] == i) cumkount[i][j] = cumkount[i][j-1] + 1;
			else cumkount[i][j] = cumkount[i][j-1];
		}
	}
}

int main(){
	sieve_cumkount();
	ll test;
	scanf("%lld", &test);

	while(test--){
		ll a, b, n, ans;
		scanf("%lld %lld %lld", &a, &b, &n);
		ans = cumkount[n][b] - cumkount[n][a-1];
		printf("%lld\n", ans);
	}
}
