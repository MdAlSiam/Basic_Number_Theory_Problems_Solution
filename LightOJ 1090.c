#include <stdio.h>

#define ll long long int

int main(){
	ll test, tc = 0, f5 = 0, f2 = 0, p5 = 0, p2 = 0, i, pp;
	ll n, r, p, q, ans;
	scanf("%lld", &test);
	while(test--){
		scanf("%lld %lld %lld %lld", &n, &r, &p, &q);
		f5 = 0; f2 = 0, p5 = 0, p2 = 0;
		for(i = 5; i <= n; i *= 5) f5 += (n/i);
		for(i = 2; i <= n; i *= 2) f2 += (n/i);
		for(i = 5; i <= (n-r); i *= 5) f5 -= ((n-r)/i);
		for(i = 2; i <= (n-r); i *= 2) f2 -= ((n-r)/i);
		for(i = 5; i <= r; i *= 5) f5 -= (r/i);
		for(i = 2; i <= r; i *= 2) f2 -= (r/i);
		pp = p;
		while(pp % 5 == 0) {pp /= 5; p5++;}
		while(p % 2 == 0) {p /= 2;  p2++;}
		f5 += (p5*q);
		f2 += (p2*q);
		if(f5 <= f2) ans = f5;
		else ans = f2;printf("Case %lld: %lld\n", ++tc, ans);
	}
}
