#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll zerosinfact(ll num){
	ll kount = 0;
	for(ll i = 5; i <= num; i *= 5) kount += (num/i);
	return kount;
}

ll explore(ll lo, ll hi, ll gnoz){
	if(lo > hi) return -1;
	ll mid = lo + (hi - lo) / 2;
	if(zerosinfact(mid) == gnoz){
		while(zerosinfact(mid) == gnoz) mid--;
		return ++mid;
	}
	else if(zerosinfact(mid) < gnoz) return explore(mid+1, hi, gnoz);
	else return explore(lo, mid-1, gnoz);

}

int main(){
	ll test, tc = 0, gnoz;
	scanf("%lld", &test);
	while(test--){
		scanf("%lld", &gnoz);
		ll ans = explore(1, INT_MAX, gnoz);
		(ans == -1)? printf("Case %lld: impossible\n", ++tc) : printf("Case %lld: %lld\n", ++tc, ans);
	}
}
