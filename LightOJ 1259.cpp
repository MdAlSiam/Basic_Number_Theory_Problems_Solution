#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define maxi 10000007

bool mark[maxi];
ll primes[maxi/10];

void sieve(){
	memset(mark, false, sizeof(mark));
	for(ll i = 2; i <= maxi; i++){
		if(mark[i] == false){
			//ll t = (maxi / i);
			for(ll j = i; i*j <= maxi; j++){
				mark[i*j] = true;
			}
		}
	}
	ll pin = 0;
	for(ll i = 2; i <= maxi; i++)
		if(mark[i] == false) primes[pin++] = i;
}

ll findans(ll num){
	ll kount = 0;
	for(ll i = 0; primes[i] <= (num/2); i++){
		ll b = num - primes[i];
		if(mark[b] == false) kount++;
	}
	return kount;
}

int main(){
	sieve();
	//for(ll i = 0; i < 10; i++) cout << mark[i] << " "; cout << endl;
	//for(ll j = 0; j < 10; j++) cout << primes[j] << " "; cout << endl;
	ll test, tc = 0, num;
	scanf("%lld", &test);
	while(test--){
		scanf("%lld", &num);
		ll ans = findans(num);
		printf("Case %lld: %lld\n", ++tc, ans);
	}
}
