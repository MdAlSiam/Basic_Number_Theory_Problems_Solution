#include <cstdio>

using namespace std;

#define ll long long int

int main(){
	///Idea: http://rizoantoufiq.blogspot.com/2015/12/lightoj-1098-new-function.html
	ll test;
	scanf("%lld", &test);
	ll kase = 0;
	while(test--){
		ll num;
		scanf("%lld", &num);
		ll ans = 0;
		for(ll i = 2; i*i <= num; i++){
			ll all_last = (num / i);
			ll minus_last = i-1;
			ans += ((all_last - minus_last) * (all_last + minus_last + 1)) / 2;
			ans += i * (all_last - minus_last - 1);
		}
		printf("Case %lld: %lld\n", ++kase, ans);
	} ///eot

}
